#include <iostream>
#include <vector>
#include "../headers/game.h"

inline Game::Game () {
    this->game = *new std::vector<int>();  // why '*'?
};

inline void Game::move (int& direction) {
    if (direction == 0) { // up
        std::cout << "moving up" << std::endl;
    }
}
