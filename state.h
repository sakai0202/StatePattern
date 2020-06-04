#pragma once
#include <string>

/*!
* @brief 由実ちゃんの状態を表す基底クラス
*/
class State {
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

};

