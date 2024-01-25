#ifndef GAME_HPP
#define GAME_HPP

#include <map>
#include "Player.hpp"  // Include the header file for the Player class

class Game {
public:
    Game(const std::string& gameName);
    ~Game();

    void addPlayer(const Player& player);
    void startGame();
    void nextFrame();
    void playTurn();

private:
    std::string gameName;
    std::map<std::string, Player> playersMap;  // Map to store players by name
    int currentFrame;
    // Add any other game-related data as needed
};

#endif // GAME_HPP
