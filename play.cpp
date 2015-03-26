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
	int squareToPlay = 0;
    while(1) {
        std::cin.clear(); // clear flags
        std::cin.ignore(1000, '\n'); // flush buffer
        std::cin >> input;
        check = 1;
        try {
           squareToPlay = std::stoi(input);
        }   
        catch(std::invalid_argument) {
            std::cout << "Enter an integer not a string\n";
            check = 0;
        }   
        if((squareToPlay < 1 || squareToPlay > 9) && check) {
            std::cout << "Enter a a valid integer 1-9.\n";
        }   
        if(squareToPlay >= 1 && squareToPlay <= 9)
            break;
    }
}
