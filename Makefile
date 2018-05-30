CC=gcc -fno-builtin
YFLAG=-d
FNAME=compiler_hw2
EXE=myparser

compile: scanner parser
	${CC} lex.yy.c y.tab.c -lfl -o  ${EXE}

scanner:
	lex ${FNAME}.l

parser: 
	yacc ${YFLAG} ${FNAME}.y

test: compile
	./${EXE} < input/semantic_analysis.go

clean:
	rm ${EXE} y.tab* lex.* y.output

