#include "function.h"

int main () {
    printLine("Exercise 05: NextDay");
    printEnter();

    date today = currentDate();

    std::cout << "Today is " << vnDateForm(today) << "\n";
    std::cout << "Tomorrow is: " << nextDay(today) << "\n\n";

    printText("Kết thúc chương trình!\ns");

    return 0;
}