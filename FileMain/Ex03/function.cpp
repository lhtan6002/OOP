#include "function.h"

std::string toFixedString(float value) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << value;
    return oss.str();
}

std::string vndForm (std::string money) {
    int cnt = 0;
    for (int i = money.length() - 1; i >= 0; --i) {
        if (3 == cnt) {
            money.insert(i + 1, ".");
            cnt = 1;
        } else {
            ++cnt;
        }
    }

    return money;
}

std::string usdForm (std::string money) {
    return "$" + money;
}