#pragma once
#include "state.h"

class BadMoodState : public State {
public:
    BadMoodState() : State("BadMoodState") {};
    /*!
    * @brief 朝の挨拶を返す。気分が悪いので、ぶっきらぼうに応えます。
    */
    std::string morning_greet() override;

    /*!
    * @brief 防寒対策を返す。気分が悪いので、ももひきをはきます。
    */
    std::string get_protection_for_cold() override;
};

