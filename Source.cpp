#include <iostream>
#include "StatePatternYumichan.h"

void comment(StatePatternYumichan &yumichan) {
    std::cout << std::endl;
    std::cout << "�@�@���A�F";
    std::cout << yumichan.morning_greet() << std::endl;
    std::cout << "�h�����@�F";
    std::cout << yumichan.get_protection_for_cold() << std::endl;
}

int main() {
    StatePatternYumichan yumichan;
    // �ʏ펞
    comment(yumichan);

    yumichan.has_a_cold();

    // ���ׂ��Ђ��ċ��������
    comment(yumichan);

    yumichan.is_over_her_cold();

    // �ʏ펞
    comment(yumichan);

    yumichan.change_state(new ExcellentState);

    comment(yumichan);

}
