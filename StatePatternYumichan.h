#pragma once

#include "OrdinaryState.h"
#include "BadModeState.h"

class StatePatternYumichan {
private:
    State* state;
    void change_state(State* state);
public:
    StatePatternYumichan();
public:
    std::string morning_greet();
    std::string get_protection_for_cold();

    void has_a_cold();
    void is_over_her_cold();
};

