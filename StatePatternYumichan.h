#pragma once

#include "OrdinaryState.h"
#include "BadMoodState.h"
#include "ExcellentState.h"
#include <iostream>
#include <string>

class StatePatternYumichan {
private:
    State* state;
public:
    void change_state(State* state);
public:
    StatePatternYumichan();
public:
    std::string morning_greet();
    std::string get_protection_for_cold();
    std::string showIsHappy();
    int GetDiceRes();

    void unimportant_talk();
    void has_a_cold();
    void is_over_her_cold();

    State* GetState();
};

