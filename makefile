OBJS = main.o DisplayBoard.o menu.o play.o
CC = g++
CFLAGS = -Wall -Wextra -c -g -I. # -I. looks in current directory for header files
LFLAGS = -Wall -Wextra -g

tic_tac_toe : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o tic_tac_toe

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp

DisplayBoard.o : DisplayBoard.cpp
	$(CC) $(CFLAGS) DisplayBoard.cpp

menu.o : menu.cpp
	$(CC) $(CFLAGS) menu.cpp

play.o : play.cpp
	$(CC) $(CFLAGS) play.cpp
clean:
	rm *o #tic_tac_toe
