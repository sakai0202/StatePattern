#pragma once
#include <string>

#include <time.h>
#include <stdio.h>


/*!
* @brief —RÀ‚¿‚á‚ñ‚Ìó‘Ô‚ğ•\‚·Šî’êƒNƒ‰ƒX
*/
class State {
private:
    int dice;
protected:
    std::string statename;
public:
    State(std::string name) { statename = name; };
    /*!
    * @brief ’©‚Ìˆ¥A‚ğ•Ô‚·
    */
    virtual std::string morning_greet() = 0;

    /*!
    * @brief –hŠ¦‘Îô‚ğ•Ô‚·
    */
    virtual std::string get_protection_for_cold() = 0;

    virtual std::string happy() {
        return "K‚¹‚Å‚Í‚È‚¢‚Å‚·‚Ë";
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

