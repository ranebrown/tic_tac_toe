/*
*  menu.cpp
*  Tic Tac Toe
*
*  Created by Rane on 3/13/15.
*/

#include "tt.h"

int menu() {
	int selection = -1;
	std::cout << "Enter the whether you want to be X's or O's\n";
	std::cout << "1: I want to be X's\n";
	std::cout << "2: I want to be O's\n";
    
	// Read User Input
	std::string input;
	int check = -1;
    while(1) {
        std::cin >> input;
        check = 1;
        try {
            selection = std::stoi(input);
        }   
        catch(std::invalid_argument) {
            std::cout << "Enter an integer not a string\n";
            check = 0;
        }
        if((selection < 1 || selection > 2) && check) {
            std::cout << "Enter a a valid integer 1-2.\n";
        }
        if(selection == 1 || selection == 2)
            break;
    }	
	return selection;
}
