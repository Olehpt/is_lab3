#pragma once
#include <string>
#include <cstring>
#include <map>

#define n 7

class GameState {
    static std::map<uint8_t, char> defs;
    uint8_t layout[n][n];
public:
    GameState();
    GameState(uint8_t l[n][n]);
    std::string to_string();
    void print();
};