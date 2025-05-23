#include "function.h"

int cntOddNumber (std::vector<int> list) {
    int cnt = 0;
    for (int i : list) {
        if (0 != i % 2) {
            ++cnt;
        } 
    }
    return cnt;
}

int cntEvenNumber (std::vector<int> list) {
    int cnt = 0;
    for (int i : list) {
        if (0 == i % 2) {
            ++cnt;
        } 
    }
    return cnt;
}

bool isPrime (int n) {
    if (n <= 1) return false;
    if (2 == n || 3 == n) return true;
    if (0 == n % 2 || 0 == n % 3) return false;

    for (int i = 5; i*i <= n; i += 6) {
        if (0 == n % i || 0 == n % (i + 2)) return false;
    }

    return true;
}

void printListPrime(std::vector<int> list) {
    int cnt = 0;

    for (int i : list) {
        if (isPrime(i)) std::cout << i << " ";
        ++cnt;
    }

    if (0 == cnt) std::cout << "Your list no have any prime number";
}