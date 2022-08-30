#include <iostream>
#include "../lib/conio.h/conio.h"
#include "game.cpp"


// enum INPUT
//   {
//    LEFT = 'q',
//    RIGHT = 'd',
//    TOP = 'z',
//    BOTTOM = 's',
//    STOP = 'x'
//   };


int main () {
    // clrscr();
    std::cout << "--- BEGIN LOOP ---" << std::endl;
    
    Game game = *new Game(4);
    game.print();

    char c;
    while (true) {
        c = getch();
        // std::cin >> c;
        std::cout << "Pressed key " << c << std::endl;
        // printf("%c", c);

        if (c == 'a') {
            std::cout << "A was pressed" << std::endl;
        }
    }

    return 0;
}

