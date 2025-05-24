#include "utils.h"

void printText (std::string text) {
    std::cout << text;
}

void printLine (std::string line) {
    std::cout << line << "\n";
}

void printEnter () {
    std::cout << "\n";
}

std::string enterString (std::string& str) {
    std::getline(std::cin, str);
    return str;
}

bool isValidInteger (const std::string& str) {
    std::regex pattern(R"(^-?\d+$)");
    return std::regex_match(str, pattern);
}

void enterRange (std::string& str, const std::string wrongForm, const std::string wrongRange, const std::string reminder, const std::string success, int min, int max) {
        while (true) {
        if (!isValidInteger(str)) {
            printLine(wrongForm);
            printText(reminder);
            enterString(str);
            printEnter();
        } else {
            int n = std::stoi(str);
            if (n < min || n > max) {
                printLine(wrongRange);
                printText(reminder);
                enterString(str);
                printEnter();
            } else {
                printLine(success);
                break;
            }
        }
    }
}

int generateIntegerRange (int min, int max) {
    return (rand() % (max - min + 1) + min);
}

void printList_int(std::vector<int>& list) {
    for (int i : list) {
        std::cout << i << " ";
    }
    printEnter();
}