#include "../../includes/Player_hpp/player.hpp"

Player::Player(const std::string name, int playerNum)
{
	this->name = name;
	this->playerNum = playerNum;
	std::vector<int> firstShots(0);
	std::vector<int> secondShots(0);
	iota(firstShots.begin(), firstShots.end(), 1);
	iota(secondShots.begin(), secondShots.end(), 1);
 	for (int i = 0; i < 10; i++) {
        cout << firstShots[i] << " ";
    }
}

Player::~Player() {
    // Destructor implementation if needed
}

std::string Player::getName() const {
    return name;
}

int Player::getScore(int roundNum) const {
    if (roundNum >= 1 && roundNum <= 10) {
        return scores[roundNum - 1];  // Adjust index for 1-based round number
    }
    return -1;  // Invalid round number
}

int Player::getPlayerNum() const {
    return playerNum;
}

void Player::setScore(int roundNum, int score, bool secondShot) {
    // Handle special cases for strikes, spares, and the third shot in the tenth frame
    if (roundNum >= 1 && roundNum <= 10) {
        if (secondShot && roundNum < 10) {
            scores[roundNum - 1] += score;
        } else if (roundNum < 10 && scores[roundNum - 1] == 10) {
            // Handle spare in previous frame
            scores[roundNum] += score;
        } else {
            scores[roundNum - 1] = score;
        }
    }
}
