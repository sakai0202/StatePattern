#pragma once
#include "State.h"

class OrdinaryState : public State {
public:
    /*!
    * @brief ���̈��A��Ԃ��B�ʏ�́A�j�炵�������܂��B
    */
    std::string morning_greet() override;

    /*!
    * @brief �h���΍��Ԃ��B�ʏ�́A����悤�ł��B
    */
    std::string get_protection_for_cold() override;
};


