#include "function.h"

int main () {
    printLine("Exercise 03: CurrencyDisplay");
    printEnter();

    printText("Enter an integer money in range of [1.000.000, 10.000.000] (VND): ");
    std::string money = "";
    enterString(money);
    printEnter();
    enterRange(money, "Error: Input must be a number representing money", "Error: Please enter an amount within the valid range", "Enter an integer money in range of [1.000.000, 10.000.000]: ", "", 1000000, 10000000);
 
    printText("Enter the exchange rate for 1 USD (VND): ");
    std::string exchangeMoney = "";
    enterString(exchangeMoney);
    enterRange(exchangeMoney, "Error: Input must be a number representing money", "Error: Please enter an amount within the valid range", "Enter the exchange rate for 1 USD (VND): ", "", 0, INT_MAX);

    float exchangedMoney = std::stof(money) / std::stof(exchangeMoney);
    std::string usd = toFixedString(exchangedMoney);

    money = vndForm(money);
    printText("VND FORM: ");
    printText(money);
    printLine(" d");

    usd = usdForm(usd);
    printText("USD FORM: ");
    printText(usd);
    printEnter();

    printText("Kết thúc chương trình!");

    return 0;
}