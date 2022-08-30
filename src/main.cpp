#include <iostream>
#include "game.cpp"

int main () {
    std::cout << "loop" << std::endl;
    
    Game game = *new Game();

    int dir = 0;
    game.move(dir);

    return 0;
}
