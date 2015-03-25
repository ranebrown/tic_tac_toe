OBJS = main.o DisplayBoard.o menu.o
CC = g++
CFLAGS = -Wall -Wextra -c -g -I.
LFLAGS = -Wall -Wextra -g

tic_tac_toe : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o tic_tac_toe

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp

DisplayBoard.o : DisplayBoard.cpp
	$(CC) $(CFLAGS) DisplayBoard.cpp

menu.o : menu.cpp
	$(CC) $(CFLAGS) menu.cpp

clean:
	rm *o #tic_tac_toe
