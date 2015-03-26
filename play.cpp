/*
 *  play.cpp 
 *  Tic Tac Toe
 *
 *  Created by Rane on 3/13/15.
*/

#include "tt.h"

void play(int selection) {
	std::cout << "Enter the number of the square you would like to occupy...\n";
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
        if((selection < 1 || selection > 9) && check) {
            std::cout << "Enter a a valid integer 1-9.\n";
        }   
        if(selection >= 1 || selection <= 9)
            break;
    }
	std::cout << selection;
}
