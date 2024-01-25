// Player.hpp
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <vector>

class Player {
private:
    std::string name;
    std::vector<int> scores;  // Use a vector to store scores for each round
    int playerNum;

public:
    Player(const std::string& name, int playerNum);
    ~Player();

    std::string getName() const;
    int getScore(int roundNum) const;
    int getPlayerNum() const;
    void setScore(int roundNum, int score, bool secondShot = false);
};

#endif // PLAYER_HPP