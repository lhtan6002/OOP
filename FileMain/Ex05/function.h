#ifndef FUNCTION_H
#define FUNCTION_H

#include "../../libs/include.h"
#include "../../libs/utils.h"

struct date {
    int day;
    int month;
    int year;
};

date currentDate ();
std::string format2 (int);
std::string format4 (int);
std::string vnDateForm (date);
std::string usDateForm (date);
bool isLeapYear (int);
std::string nextDay (date);

#endif