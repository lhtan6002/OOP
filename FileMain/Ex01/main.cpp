// Exercise 01
#include "../../libs/include.h"
#include "../../libs/utils.h"

int main () {
    printLine("Exercise 01: DeathLoop");
    printEnter();

    std::string number = "";

    printText("Hãy nhập 1 số nguyên thuộc khoảng [1, 10] để kết thúc chương trình: ");
    enterString(number);
    printEnter();

    enterRange(number, "Lỗi! Định dạng không hợp lệ.", "Lỗi! Số bạn vừa nhập không hợp lệ.", "Hãy nhập 1 số nguyên thuộc khoảng [1, 10] để kết thúc chương trình: ", 1, 10);
 
    printText("Kết thúc chương trình!");

    return 0;
}