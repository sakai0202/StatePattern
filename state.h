#pragma once
#include <string>

#include <time.h>
#include <stdio.h>


/*!
* @brief 由実ちゃんの状態を表す基底クラス
*/
class State {
private:
    int dice;
protected:
    std::string statename;
public:
    State(std::string name) { statename = name; };
    /*!
    * @brief 朝の挨拶を返す
    */
    virtual std::string morning_greet() = 0;

    /*!
    * @brief 防寒対策を返す
    */
    virtual std::string get_protection_for_cold() = 0;

    virtual std::string happy() {
        return "幸せではないですね";
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

