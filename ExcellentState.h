#pragma once
#include "state.h"

class ExcellentState : public State {
public:
    ExcellentState();
    std::string morning_greet() override;
    std::string get_protection_for_cold() override;

    std::string happy() override;

};



