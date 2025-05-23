#include "../../libs/include.h"
#include "../../libs/utils.h"

int main () {
    printLine("Exercise 03: CurrencyDisplay");
    printEnter();

    printText("Enter an integer money in range of [1.000.000, 10.000.000] (VND): ");
    std::string money = "";
    enterString(money);
    enterRange(money, "Error: Input must be a number representing money", "Error: Please enter an amount within the valid range", "Enter an integer money in range of [1.000.000, 10.000.000]: ", "", 1000000, 10000000);
 
    printText("Enter the exchange rate for 1 USD (VND): ");
    std::string exchangeMoney = "";
    enterString(exchangeMoney);
    enterRange(exchangeMoney, "Error: Input must be a number representing money", "Error: Please enter an amount within the valid range", "Enter the exchange rate for 1 USD (VND): ", "", 0, INT64_MAX);

    float USD = std::round(std::stof(money) / std::stof(exchangeMoney) * 100) / 100;

    printText("Kết thúc chương trình!");

    return 0;
}