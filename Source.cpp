#include <iostream>
#include "StatePatternYumichan.h"

void comment(StatePatternYumichan &yumichan) {
    std::cout << std::endl;
    std::cout << "�@�@���A�F";
    std::cout << yumichan.morning_greet() << std::endl;
    std::cout << "�h�����@�F";
    std::cout << yumichan.get_protection_for_cold() << std::endl;
}

//��D���݈̂Ⴄ����
void action(StatePatternYumichan& yumichan) {
    std::cout << "Question : ���Ȃ��͍K���H" << std::endl;
    std::cout << yumichan.showIsHappy() << std::endl;
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

    action(yumichan);

    yumichan.change_state(new OrdinaryState);

    comment(yumichan);

    action(yumichan);

    std::string temp;

    
    while (1) {
        std::cout << "0�ŏI���@�P�Ń_�C�X" << std::endl;
        

        std::cin >> temp;
        if (temp == "0") break;
        int res;
        res = yumichan.GetDiceRes();

        std::cout << "�_�C�X�I :" << res << std::endl;

        if (res > 4)
            yumichan.change_state(new ExcellentState);
        else if(res < 2)
            yumichan.change_state(new BadMoodState);
        else {
            yumichan.change_state(new OrdinaryState);
        }

        comment(yumichan);
    }

    std::cout << "���悤�Ȃ�B" << std::endl;
}


