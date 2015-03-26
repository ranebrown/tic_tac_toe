/*
 *  main.cpp
 *  Tic Tac Toe
 *
 *  Created by Rane on 3/13/15.
*/

#include "tt.h"
#include <string>

int main(int argc, const char * argv[]) {
    if(argc == 2) { 
		std::string help = argv[1]; // argv[0] is program name
		if(help.compare("-h") == 0) {
			std::cout << "Its tic-tac-toe!!!\n";
			std::cout << "Command-line argugments:\n";
			std::cout << "\t -h == help\n";
			std::cout << "\t -r == random computer selection of x's or o's (should be easy)\n";
		}
 	}
	int selection = -1;	
	selection = menu();
	if(selection == 1)
		std::cout << "You are now X's, the computer is O's\n";
	else 
		std::cout << "You are now O's, the computer is X's\n";
	DisplayBoard();
	play(selection);
    return 0;
}
