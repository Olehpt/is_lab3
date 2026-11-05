#include "GameState.h"
#include <iostream>

std::map<uint8_t, char> GameState::defs = {
    {0, '0'},
    {1, 'a'},
    {2, 'd'},
    {3, 'K'}
};


GameState::GameState() {
    uint8_t l[n][n] = {
        0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 2, 0, 0, 0,
        1, 1, 2, 3, 2, 1, 1,
        0, 0, 0, 2, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0,
    };
    memcpy(layout, l, sizeof(l));
}

GameState::GameState(uint8_t l[n][n]) {
    memcpy(layout, l, sizeof(l));
}

std::string GameState::to_string() {
    std::string str = "";
    for (size_t i = 0; i < n; i++) {
        for (size_t k = 0; k < n; k++) {
            str.push_back(defs.at(layout[i][k]));
            str.push_back(' ');
        }
        str.push_back('\n');
    }
    return str;
}

void GameState::print() {
    std::cout << this->to_string() << "\n";
}