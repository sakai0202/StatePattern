#include "StatePatternYumichan.h"

StatePatternYumichan::StatePatternYumichan() :state(new OrdinaryState) {}

std::string StatePatternYumichan::morning_greet() {
    return this->state->morning_greet();
}

std::string StatePatternYumichan::get_protection_for_cold() {
    return this->state->get_protection_for_cold();
}

std::string StatePatternYumichan::showIsHappy() {
    return this->state->happy();
}

void StatePatternYumichan::has_a_cold() {
    this->change_state(new BadMoodState);
}

void StatePatternYumichan::is_over_her_cold() {
    this->change_state(new OrdinaryState);
}

int StatePatternYumichan::GetDiceRes() {
    this->state->SetDice();
    return this->state->GetDice();

}

void StatePatternYumichan::change_state(State* state) {
    std::cout << "¡‚Ìó‘Ô‚Í" << this->state->GetStateName() << "‚¾‚æB" << std::endl;
    delete this->state;
    this->state = state;
    std::cout << "V‚µ‚¢ó‘Ô‚Í" << this->state->GetStateName() << "‚¾‚æB" << std::endl;    
}