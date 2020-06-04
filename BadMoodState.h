#pragma once
#include "state.h"

class BadMoodState : public State {
public:
    BadMoodState() : State("BadMoodState") {};
    /*!
    * @brief ���̈��A��Ԃ��B�C���������̂ŁA�Ԃ�����ڂ��ɉ����܂��B
    */
    std::string morning_greet() override;

    /*!
    * @brief �h���΍��Ԃ��B�C���������̂ŁA�����Ђ����͂��܂��B
    */
    std::string get_protection_for_cold() override;
};

