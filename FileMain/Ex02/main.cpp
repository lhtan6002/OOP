// Exercise 01
#include "../../libs/include.h"
#include "../../libs/utils.h"
#include "function.h"

int main () {
    printLine("Exercise 02: WrongPassword");
    printEnter();

    printLine("Nhập password \\\"IloveHCMUS\\\" để về màn hình chính.");
    printLine("Lưu ý: Bạn có 3 lần để nhập passwork.");
    printEnter();

    std::string password = "";
    int cnt = 3;

    while (cnt != 0) {
        int strCnt = cnt;
        printText("Tries left: ");
        printLine(std::to_string(strCnt));

        printText("Enter password: ");
        enterString(password);

        while(!passwordForm(password)) {
            printLine("Enter password: ");
            enterString(password);
            printEnter();
        }

        printEnter();

        if (!isCorrectPassword(password, "IloveHCMUS")) {
            --cnt;
            printLine("Incorrect password. Please try again.");
        }
        else break;
    }

    if (0 == cnt) {
        printLine("Bạn đã nhập sai 3 lần. Chương trình sẽ kết thúc...");
    } else {
        int choose = mainScreen();
        if (1 == choose) {
            printLine("You returned to the password screen");
            return main();
        }
    }

    printText("Kết thúc chương trình!");

    return 0;
}