#pragma once  // only compile once

#include <vector>

class Game {

    public:
        Game(int size);
        // std::vector<int> getGame();
        void print();
        void move (int direction);

    private:
        int size;
        int* board;
        // std::vector<int> game;
    
};
