#pragma once  // only compile once

#include <vector>

class Game {

    public:
        Game();
        std::vector<int> getGame();
        void move (int& direction);

    private:
        std::vector<int> game;
    
};
