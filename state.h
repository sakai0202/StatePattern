#pragma once
#include <string>

#include <time.h>
#include <stdio.h>


/*!
* @brief �R�������̏�Ԃ�\�����N���X
*/
class State {
private:
    int dice;
protected:
    std::string statename;
public:
    State(std::string name) { statename = name; };
    /*!
    * @brief ���̈��A��Ԃ�
    */
    virtual std::string morning_greet() = 0;

    /*!
    * @brief �h���΍��Ԃ�
    */
    virtual std::string get_protection_for_cold() = 0;

    virtual std::string happy() {
        return "�K���ł͂Ȃ��ł���";
    };

    std::string GetStateName() {
        return statename;
    }

    virtual void SetDice() {
        srand((unsigned int)time(NULL));
        dice = rand() % 6 + 1;
    }

    int GetDice() {
        return dice;
    }





};

