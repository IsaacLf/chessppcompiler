export PROGRAM
ifndef PROGRAM
	PROGRAM 	= chspc
endif
CC 			= gcc

YFLAGS 		= -d

SRCS 		= $(PROGRAM).tab.c lex.yy.c
OBJS 		= $(PROGRAM).tab.o lex.yy.o

all: 			$(PROGRAM)
				make -s clean

.c.o: 			$(SRCS) 
				$(CC) -c $*.c -o $@ -O

$(PROGRAM).tab.c: 	$(PROGRAM).y 
				bison $(YFLAGS) $(PROGRAM).y

lex.yy.c: 		$(PROGRAM).l 
				lex $(PROGRAM).l

$(PROGRAM): 			$(OBJS) 
				$(CC) $(OBJS) -o $@ 
#-lfl -lm

clean: 		
		rm -f $(OBJS) core *~ \

#*.o $(PROGRAM) y.* lex.yy.* $(PROGRAM).tab.* 