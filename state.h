#pragma once
#include <string>

/*!
* @brief �R�������̏�Ԃ�\�����N���X
*/
class State {
public:
    /*!
    * @brief ���̈��A��Ԃ�
    */
    virtual std::string morning_greet() = 0;

    /*!
    * @brief �h���΍��Ԃ�
    */
    virtual std::string get_protection_for_cold() = 0;

};

