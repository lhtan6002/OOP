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

    while (true) {
        if (!isValidInteger(number)) {
            printLine("Lỗi! Định dạng không hợp lệ.");
            printText("Hãy nhập 1 số nguyên thuộc khoảng [1, 10] để kết thúc chương trình: ");
            enterString(number);
            printEnter();
        } else {
            int n = std::stoi(number);
            if (1 >= n || n >= 10) {
                printLine("Lỗi! Số bạn vừa nhập không hợp lệ.");
                printText("Hãy nhập 1 số nguyên thuộc khoảng [1, 10] để kết thúc chương trình: ");
                enterString(number);
                printEnter();
            } else {
                printLine("Hợp Lệ!");
                break;
            }
        }
    }

    printText("Kết thúc chương trình!");

    return 0;
}