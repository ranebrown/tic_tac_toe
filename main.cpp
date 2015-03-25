/*
 *  main.cpp
 *  Tic Tac Toe
 *
 *  Created by Rane on 3/13/15.
*/

#include <iostream>
#include "tt.h"

int main(int argc, const char * argv[]) {
    if(argc > 1) { // program name is first command line argument
        std::cout << "Program does not accept command line arguments.\n";
        return -1;
    }
    else {
        DisplayBoard();
    }
    return 0;
}
