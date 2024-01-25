#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include "includes/player_hpp/player.hpp"

class Game {
public:
    Game(const std::string& gameName);
    ~Game();

    void addPlayer(const std::string& playerName);
    void startGame();
    void nextFrame();
    void playTurn();

private:
    std::string gameName;
    std::vector<Player> players;
    int currentFrame;
    // Add any other game-related data as needed
};

#endif // GAME_HPP
