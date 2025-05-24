#include "function.h"

date currentDate () {
    std::time_t now = std::time(nullptr);

    std::tm* localTime = std::localtime(&now);
    
    int day = localTime->tm_mday;
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;

    return {day, month, year};
}

std::string format2 (int n) {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << n;
    return oss.str();
}

std::string format4 (int n) {
    std::ostringstream oss;
    oss << std::setw(4) << std::setfill('0') << n;
    return oss.str();
}

std::string vnDateForm (date date) {
    int date_int = date.year * 10000 + date.month * 100 + date.day;
    std::string date_str = std::to_string(date_int);

    std::regex pattern(R"((\d{4})(\d{2})(\d{2}))");
    std::string formatted = std::regex_replace(date_str, pattern, "$3/$2/$1");

    return formatted;
}

std::string usDateForm (date date) {
    return format2(date.month) + "/" + format2(date.day) + "/" + format2(date.year % 100);
}

bool isLeapYear (int year) {
    if (0 == year % 4 && 0 != year % 100) return true;
    if (0 == year % 400) return true;
    return false;
}

std::string nextDay (date date) {
    int maxDay = 0;
    switch (date.month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        maxDay = 31;
        break;
    
    case 4: case 6: case 9: case 11:
        maxDay = 30;
        break;

    case 2:
        if (isLeapYear(date.year)) maxDay = 29;
        else maxDay = 28;

    default:
        break;
    }

    if (date.day == maxDay) {
        if (date.month == 12) {
            date.day = 1;
            date.month = 1;
            date.year += 1;
        } else {
            date.day = 1;
            date.month += 1;
        }
    } else date.day += 1;

    return usDateForm(date);
}