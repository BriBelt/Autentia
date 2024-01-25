#pragma once
#include <vector>
#include "player.hpp"

class Game {
public:
    Game();
    // Add methods for managing the game state
private:
    std::vector<Player> players;
    int currentFrame;
    // Add other game-related data as needed
};
