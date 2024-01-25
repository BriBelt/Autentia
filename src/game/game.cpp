#include "includes/game_hpp/game.hpp"
#include <iostream>

Game::Game(const std::string& name, int numPlayers) : gameName(name), numPlayers(numPlayers), currentFrame(1) {
    // Initialization code, if any
}

Game::~Game() {
    // Cleanup code, if any
}

void Game::addPlayer(const Player& player) {
    playersMap[player.getName()] = player;
}

void Game::startGame() {
    std::cout << "Game '" << gameName << "' has started!" << std::endl;
}

void Game::nextFrame() {
    if (currentFrame < 10) {
        currentFrame++;
        std::cout << "Moving to frame " << currentFrame << std::endl;
    } else {
        std::cout << "Game over!" << std::endl;
        // Add any end-of-game logic if needed
    }
}

void Game::playTurn() {
    std::cout << "Round " << currentFrame << " - Enter scores for each player:" << std::endl;

    for (const auto& player : playersMap) {
        std::string playerName = player.first;
        int score;

        std::cout << "Enter score for player " << playerName << ": ";
        std::cin >> score;

        // Add logic to update player scores, handle strikes, spares, etc.
        // You may want to interact with the Player and Calculation classes here.
    }

    // After all players have entered their scores, you can print the results or perform additional logic.
}


// Getters and setters
std::string Game::getName() const {
    return gameName;
}

int Game::getCurrentFrame() const {
    return currentFrame;
}

void Game::setName(const std::string& name) {
    gameName = name;
}

void Game::setCurrentFrame(int frame) {
    currentFrame = frame;
}
