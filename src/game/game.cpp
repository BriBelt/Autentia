#include "Game.hpp"
#include <iostream>

Game::Game(const std::string& name) : gameName(name), currentFrame(1) {
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
    // Add logic for handling player turns, scoring, etc.
    // You may want to interact with the Player and Calculation classes here.
}
