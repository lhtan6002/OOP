#include "function.h"


bool passwordForm(const std::string password) {
    if (password == "") {
        printLine("Password field cannot be empty");
        printEnter();
        return false;
    } else if (password.length() < 8) {
        printLine("Your password must be at least 8 characters long");
        printEnter();
        return false;
    }
    return true;
}

bool isCorrectPassword(const std::string password, const std::string correctPassword) {
    if (password != correctPassword) return false;
    return true;
}

// Code bên dưới được nhập cứng để tiết kiệm thời gian ạ!
void drawScreen () {
    for (int w = 0; w <= 73; ++w) 
        std::cout << char(22);

    printLine("|  IIIII    ***     ***    H   H    CCC    M       M   U    U    SSS   |");
    printLine("|    I     *    * *    *   H   H   C   C   M M   M M   U    U   S      |");
    printLine("|    I       *   *   *     HHHHH   C       M   M   M   U    U    SSS   |");
    printLine("|    I         *   *       H   H   C   C   M       M   U    U       S  |");
    printLine("|  IIIII         *         H   h    CCC    M       M    UUUU     SSS   |");

    for (int w = 0; w <= 73; ++w) 
        std::cout << char(22);
}

int mainScreen () {
    printLine("WELCOME TO MAIN SCREEN");
    printEnter();

    drawScreen();
    printEnter();

    printLine("Enter '1' to go to password screen");
    printLine("Enter '0' to exit the program");

    std::string choose = "";
    printText("Your input: ");
    enterString(choose);

    enterRange(choose, "Your input is incorrect form", "Your input is incorrect range", "Plese try again", "", 0, 1);

    return std::stoi(choose);
}

/*

IIIII    ***     ***    H   H    CCC    M       M   U    U    SSSS
  I     *    * *    *   H   H   C   C   M M   M M   U    U   S
  I       *   *   *     HHHHH   C       M   M   M   U    U    SSS
  I         *   *       H   H   C   C   M       M   U    U       S 
IIIII         *         H   h    CCC    M       M    UUUU    SSSS


*/