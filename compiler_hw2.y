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
	int temp = 0;
	//int comment_oneline_flag = 0;
	//int comment_block_flag = 0;
	int i;	
	double value;
	int dec_flag = 0;
	char* TYPE = '\0';
	char* id;
	
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
%token VAR NEWLINE INC DEC PT
%token L S LE SE EE NE
%token AA SA MA DA MOA

/* Token with return, which need to sepcify type */
%token <i_val> I_CONST
%token <f_val> F_CONST		
%token <string> STRING
%token <string> INT 
%token <string> FLOAT
%token <string> VOID
%token <string> ID
%type <f_val> const 
%left '|' '&'
%left '+'  '-'
%left '*'  '/'  '%'


/* Nonterminal with return, which need to sepcify type */
%type <string> type
%type <string> relation
%type <f_val> expression
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
	| relation stat{
		printf("comparison\n");
		printf("%d\n", $1);
	}
	/*
    | print_func*/
	| NEWLINE
	| PT{
		dump_symbol();
	}
	|{}
;

declaration
    : VAR ID type '=' expression NEWLINE{
		dec_flag = 1;
	 	TYPE = $3;
		value = $5;
		insert_symbol($2);
		dec_flag = 0;
	}
    | VAR ID type NEWLINE{
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
	}
;
type
    : INT { $$ = $1; }
    | FLOAT { $$ = $1; }
    | VOID { $$ = $1; }
;
relation
	: expression L expression{
		if($1 > $3){
			$$ = 1;
		}
		else $$ = 0;
	}
	| expression S expression{
		if($1 < $3){
			$$ = 1;
		}
		else $$ = 0;
	}
	| expression LE expression{
		if(($1 > $3)|($1 == $3) ){
			$$ = 1;
		}
		else $$ = 0;
	}
	| expression SE expression{
		if(($1 < $3)|($1 == $3) ){
			$$ = 1;
		}
		else $$ = 0;
	}
	| expression EE expression{
		if($1 == $3 ){
			$$ = 1;
		}
		else $$ = 0;
	}
	| expression NE expression{
		if($1 != $3 ){
			$$ = 1;
		}
		else $$ = 0;
	}
	;
expression 
	: '(' expression ')'{
		$$ = $2;
	}
	| ID '=' expression{
		int index;
		if((index = lookup_symbol($1)) == -1){
			printf("ERROR: undefined variable: %s\n", $1);
		}else{
		symbol_table[index]->value = $3;
		printf("%f\n", $3);
		$$ = $3;
		}
	}
	| expression '+' expression{
		{ $$  =  $1 + $3; }
	}
	| expression '-' expression{
		{ $$  =  $1 - $3; }
	}
	| expression '*' expression{
		{ $$  =  $1 * $3; }
	}
	| expression '/' expression{
		{ $$  =  $1 / $3; }
	} 
	| expression '%' expression{
		{ int a = $1; int b = $3; 
		$$  =  a % b; }
	}
	| INC expression{
		{ $$  =  $2 + 1; }
	}
	| DEC expression{
		{ $$  =  $2 - 1; }
	}
	| const{
		$$ = $1;
	}
	| ID{
		int index;
		if((index = lookup_symbol($1)) == -1){
			printf("ERROR: undefined variable: %s\n", $1);
		}
		else
		$$ = symbol_table[index]->value;
	}
	;
%%

/* C code section */
int main(int argc, char** argv)
{
    yylineno = 0;

    yyparse();

    return 0;
}

void insert_symbol(char* s) {
	printf("%s \t%s TYPE VAR\n", s, TYPE);
	if(num == 0) create_symbol();
	if(lookup_symbol(s)>0){
			printf("ERROR: redefined %s\n", s);
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
	printf("The symbol table dump:\n");
	for(i = 1; i < num; i++){
		printf("%d\t%s\t%s\t%.2f\n", symbol_table[i]->index, symbol_table[i]->id, symbol_table[i]->type,symbol_table[i]->value);
	} 
}