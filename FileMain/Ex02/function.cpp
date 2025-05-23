#include "function.h"


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

void mainScreen () {
    printLine("WELCOME TO MAIN SCREEN");
    printEnter();

    drawScreen();
    printEnter();

    
}

/*

IIIII    ***     ***    H   H    CCC    M       M   U    U    SSSS
  I     *    * *    *   H   H   C   C   M M   M M   U    U   S
  I       *   *   *     HHHHH   C       M   M   M   U    U    SSS
  I         *   *       H   H   C   C   M       M   U    U       S 
IIIII         *         H   h    CCC    M       M    UUUU    SSSS


*/