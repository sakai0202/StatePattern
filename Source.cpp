#include <iostream>
#include "StatePatternYumichan.h"

void comment(StatePatternYumichan &yumichan) {
    std::cout << std::endl;
    std::cout << "　　挨拶：";
    std::cout << yumichan.morning_greet() << std::endl;
    std::cout << "防寒方法：";
    std::cout << yumichan.get_protection_for_cold() << std::endl;
}

//絶好調のみ違う動作
void action(StatePatternYumichan& yumichan) {
    std::cout << "Question : あなたは幸せ？" << std::endl;
    std::cout << yumichan.showIsHappy() << std::endl;
}

int main() {
    StatePatternYumichan yumichan;
    // 通常時
    comment(yumichan);

    yumichan.has_a_cold();

    // 風邪をひいて具合が悪い時
    comment(yumichan);

    yumichan.is_over_her_cold();

    // 通常時
    comment(yumichan);

    yumichan.change_state(new ExcellentState);

    comment(yumichan);

    action(yumichan);

    yumichan.change_state(new OrdinaryState);

    comment(yumichan);

    action(yumichan);


}
