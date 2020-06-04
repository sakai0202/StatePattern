#pragma once
#include "State.h"

class OrdinaryState : public State {
public:
    /*!
    * @brief 朝の挨拶を返す。通常は、男らしく応えます。
    */
    std::string morning_greet() override;

    /*!
    * @brief 防寒対策を返す。通常は、走るようです。
    */
    std::string get_protection_for_cold() override;
};


