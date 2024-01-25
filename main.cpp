#include <iostream>
#include "includes/game_hpp/game.hpp"  // Include the header file for the Game class

int main() {
    std::string str;

    Checker checker;

    std::cout << "Welcome to Bowling!" << std::endl;

    // Step 1: Enter the number of players
    int numPlayers;
    do {
        std::cout << "Enter the number of players (Select a number between 1 and 4): ";
        std::cin >> str;
        numPlayers = std::atoi(str.c_str());
    } while (numPlayers < 1 || numPlayers > 4);

    // Step 2: Create a Game object and add players
    Game game("Bowling", numPlayers);

    for (int i = 1; i <= numPlayers; ++i) {
        std::cout << "Enter the name for Player " << i << ": ";
        std::cin >> str;
        checker.checkname(str);
        Player player(str);
        game.addPlayer(player);
    }

    // Step 3: Start the game
    game.startGame();

    // Step 4: Play turns until the game is over
    while (true) {
        game.playTurn();
        game.nextFrame();  // Advance to the next frame

        // Check if the game is over (for simplicity, you might want to implement a proper end condition)
        if (game.getCurrentFrame() > 10) {
            std::cout << "Game over!" << std::endl;
            break;
        }
    }

    return 0;
}
