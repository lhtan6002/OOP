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