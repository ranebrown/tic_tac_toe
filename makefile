OBJS = main.o DisplayBoard.o
CC = g++
CFLAGS = -Wall -c -g
LFLAGS = -Wall -g

tic_tac_toe : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o tic_tac_toe

main.o : tt.h main.cpp
	$(CC) $(CFLAGS) main.cpp

DisplayBoard.o : tt.h DisplayBoard.cpp
	$(CC) $(CFLAGS) DisplayBoard.cpp

clean:
	rm *o tic_tac_toe
