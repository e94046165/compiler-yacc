/*	Definition section */
%{
extern int yylineno;
extern int yylex();
void yyerror(const char* message) {
    printf("Invaild format\n");
};
#define MAX_SYMBOL_NUM 100
/* Symbol table function - you can add new function if need. */
int lookup_symbol();
void create_symbol();
void insert_symbol();
void dump_symbol();
	int count = 1;
	int comment_count = 0;
	int comment_check = 0;
	int float_flag = 0;
	int temp = 0;
	int i;	
	int x, y;
	double value;
	int dec_flag = 0;
	char* TYPE = '\0';
	char* id;
	int index;
	
	char* new_symbol = '\0';
	struct symbol{
		char id[10];	
		char type[10];
		double value;
		int index;
	};
	struct symbol *symbol_table[MAX_SYMBOL_NUM];
	int num = 0;
%}

/* Using union to define nonterminal and token type */
%union {
    int i_val;
    double f_val;
    char* string;
}

/* Token without return */
%token PRINT PRINTLN 
%token IF ELSE FOR
%token VAR NEWLINE INC DEC 
%token L S LE SE EE NE
%token AA SA MA DA MOA
%token OR NOT AND
%token COMMENTBEGIN COMMENTEND COMMENTN

/* Token with return, which need to sepcify type */
%token <i_val> I_CONST
%token <f_val> F_CONST		
%token <string> STRING
%token <string> INT 
%token <string> FLOAT
%token <string> VOID
%token <string> ID
%token <string> STRING_LIT
%token <string> INCOMMENT
%token <string> OLCOMMENT
%token <string> PT
%left '|' '&'
%left '+'  '-'
%left '*'  '/'  '%'


/* Nonterminal with return, which need to sepcify type */
%type <string> type
%type <string> relation 
%type <f_val> expression
%type <f_val> const 
%type <string> printstat
%type <string> commentstat

/* Yacc will start at this nonterminal */
%start program

/* Grammar section */
%%

program
    : program stat 
    |
;

stat
    : declaration stat
	| expression  stat{
		//printf("%.2f\n", $1);
	}
	| relation stat
	/*
    | print_func*/
	| NEWLINE{
		count++;
	}
	| printstat stat
	| commentstat stat
	|{}
;
commentstat
	:COMMENTBEGIN{
		comment_count++;
		printf("\nCOMMENT BEGIN\n");
	}
	|INCOMMENT{
		printf("%s", $1);
	}
	|COMMENTN{
		printf("\n");
		comment_count++;
		count++;
	}
	|COMMENTEND{
		printf("\nEND COMMENT\n");
	}
	|OLCOMMENT{
		char* com = malloc(strlen($1)-1);
		sscanf($1, "//%s",  com);
		printf("ONELINE COMMENT :\n%s\n", com);
		comment_count++;
	}
	;
printstat
	:PT '(' STRING_LIT ')'{
		char* s = malloc(strlen($3)+1);
		strcpy(s , $3);
		int i = 0;
		if(strstr($1, "l") != '\0')printf("Println : ");
		else printf("Print : ");
		while(s[i] != '\0'){
			if(s[i] != '"') printf("%c", s[i]);
			i++;
		}
		printf("\n");
	}
	|PT '(' expression ')'{
		if(strstr($1, "l") != '\0')printf("Println : ");
		else printf("Print : ");
		printf("%f\n", $3);
	}
;
declaration
    : VAR ID type '=' expression{
		dec_flag = 1;
	 	TYPE = $3;
		
		if(float_flag == 1 && strcmp(TYPE,"int")==0){
			printf("<ERROR>Try to assign a float number to the int varible: %s (line: %d)\n", $2, count);
		}
		
		value = $5;
		printf("ASSIGN\n");
		insert_symbol($2);
		float_flag = 0;
		dec_flag = 0;
	}
    | VAR ID type{
		dec_flag = 1;
		TYPE = $3;
		//printf("%s %s\n", $2, $3);
		insert_symbol($2);
		dec_flag = 0;
	}
;
const
	:I_CONST{
		$$ = $1;
	}
	|F_CONST{
		$$ = $1;
		float_flag = 1;
	}
;
type
    : INT { $$ = $1; }
    | FLOAT { $$ = $1; }
    | VOID { $$ = $1; }
;
relation
	: expression L expression{
		printf("<Comparason>Greater than?: ");
		if($1 > $3){
			printf("True\n");
		}
		else printf("False\n");
	}
	| expression S expression{
		printf("<Comparason>Less than?: ");
		if($1 < $3){
			printf("True\n");
		}
		else printf("False\n");
	}
	| expression LE expression{
		printf("<Comparason>Greater than or Equal?: ");
		if(($1 > $3)|($1 == $3) ){
			printf("True\n");
		}
		else printf("False\n");
	}
	| expression SE expression{
		printf("<Comparason>Less than or Equal?: ");
		if(($1 < $3)|($1 == $3) ){
			printf("True\n");
		}
		else printf("False\n");
	}
	| expression EE expression{
		printf("<Comparason>Equal?: ");
		if($1 == $3 ){
			printf("True\n");
		}
		else printf("False\n");
	}
	| expression NE expression{
		printf("<Comparason>Not Equal?: ");
		if($1 != $3 ){
			printf("True\n");
		}
		else printf("False\n");
	}
	;
expression 
	: '(' expression ')'{
		$$ = $2;
	}
	| ID '=' expression{
		printf("ASSIGN\n");
		if((index = lookup_symbol($1)) == -1){
			printf("<ERROR> can’t find variable %s (line %d)\n", $1, count);
		}else{
		if(float_flag == 1 && strcmp(symbol_table[index]->type,"int")==0){
			printf("<ERROR>Try to assign a float number to a int varible: %s (line: %d)\n", $1, count);
		}
		else 
			symbol_table[index]->value = $3;
		$$ = $3;
		float_flag = 0;
		}
	}
	| expression '+' expression{
		printf("Add\n");
		$$  =  $1 + $3; 
	}
	| expression '-' expression{
		printf("Sub\n");
		$$  =  $1 - $3; 
		
	}
	| expression '*' expression{
		printf("Mul\n");
			$$  =  $1 * $3; 
	}
	| expression '/' expression{
		if($3 == 0) printf("<ERROR>The divisor can’t be 0 (line %d)\n", count);
		else{
			printf("Div\n");
			if(float_flag == 1){ 
			printf("float operation\n");
			$$  =  $1 / $3; 
		}
		else {
			$$ = (int)$1 / (int)$3;
		}
		}
	} 
	| expression '%' expression{
		printf("Mod\n");
		if(float_flag == 1){
			printf("<ERROR>MOD operation can't deal with type float (line %d)\n", count);
		}
		int a = $1; int b = $3; 
		$$  =  a % b;
	}
	| expression INC {
		$$  =  $1;
		printf("INC\n");
		symbol_table[index]->value = $1+1;
	}
	| expression DEC {
		$$  =  $1;
		printf("DEC\n");
		symbol_table[index]->value = $1-1;
	}
	| const{
		$$ = $1;
	}
	| ID{
		type_check($1);
		if((index = lookup_symbol($1)) == -1){
			printf("<ERROR> can’t find variable %s (line %d)\n", $1, count);
		}
		else{
			if(strcmp(symbol_table[index]->type,"float32")==0){ float_flag = 1; printf("a float variable\n");}
			$$ = symbol_table[index]->value;
		}	
	}
	|{}
	;
%%

/* C code section */
int main(int argc, char** argv)
{
    yylineno = 0;
	
    yyparse();
	printf("\nTotal line : %d Comment Line: %d\n", count,comment_count);
	dump_symbol();
    return 0;
}

void insert_symbol(char* s) {
	//printf("%s \t%s TYPE VAR\n", s, TYPE);
	if(num == 0) create_symbol();
	if(lookup_symbol(s)>0){
			printf("re-declaration for variable %s (line %d)\n", s, count);
			return ;
		}
		strcpy(symbol_table[num]->id, s);
		strcpy(symbol_table[num]->type, TYPE);
		symbol_table[num]->index = num;
		symbol_table[num]->value = value;
		printf("Insert a symbol : %s\n", s);
		num++;
		value = 0;
		dec_flag = 0;
}
int lookup_symbol(char* s) {
	int i = 0;
	while(i!=num){
		if(strcmp(s , symbol_table[i]->id) == 0){
			//printf("The variable is already exist\n");
			return symbol_table[i]->index;
		}
		
		i++;
	}
	return -1;
}
int type_check(char* s){
	int index = lookup_symbol(s);
	if(strcmp(symbol_table[index]->type ,"float32") == 0) 
		return 1;
	else 
		return 0;
}



void create_symbol() {
	num = 1;
	printf("Create a symbol table\n");
	int i;
	for(i = 0;i<MAX_SYMBOL_NUM; i++){
		symbol_table[i] = malloc(sizeof(struct symbol));
	}
	//printf("finish initialize\n");
	return ;
}

void dump_symbol() {
	int i;
	
	printf("\nThe symbol table :\n\n");
	printf("Index\tID\tType\tValue\n");
	for(i = 1; i < num; i++){
		if(strcmp(symbol_table[i]->type, "float32")==0)
			printf("%d\t%s\t%s\t%.2f\n", symbol_table[i]->index, symbol_table[i]->id, symbol_table[i]->type,symbol_table[i]->value);
		else
			printf("%d\t%s\t%s\t%d\n", symbol_table[i]->index, symbol_table[i]->id, symbol_table[i]->type,(int)symbol_table[i]->value);
	} 
}