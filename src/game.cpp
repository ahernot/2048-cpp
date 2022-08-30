#include <iostream>
#include <vector>
#include "../include/game.h"

inline Game::Game (int size) {
    this->size = size;
    this->board = new int[size * size];

    for (int i = 0; i < size * size; i ++) {
        this->board[i] = 0;
    }
}

inline void Game::print () {
    int i = 0;
    for (int idCol = 0; idCol < this->size; idCol ++) {
        for (int idLin = 0; idLin < this->size; idLin ++) {
            std::cout << this->board[i];
            i ++;
        }
        std::cout << std::endl;
    }
}

inline void Game::move (int direction) {
    if (direction == 0) { // up
        std::cout << "moving up" << std::endl;
    }
}
