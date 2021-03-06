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
    std::cout << "今の状態は" << this->state->GetStateName() << "だよ。" << std::endl;
    delete this->state;
    this->state = state;
    std::cout << "新しい状態は" << this->state->GetStateName() << "だよ。" << std::endl;    
}