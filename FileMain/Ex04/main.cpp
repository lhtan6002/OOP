#include "function.h"

int main () {
    printLine("Exercise 04: RandomIntegers");
    printEnter();

    std::string min = "";
    printText("Please enter the minimum value for the random number range: ");
    enterString(min); 
    printEnter();
    enterRange(min, "Error: Minimun value must be a number", "Error: Minimum value must be an positive number", "Please enter the minimum value for the random number range: ", "", 0, INT_MAX);

    std::string max = "";
    printText("Please enter the maximum value for the random number range: ");
    enterString(max);
    printEnter();
    enterRange(max, "Error: Minimun value must be a number", "Error: Maximum value must be larger than minimum value", "Please enter the maximum value for the random number range: ", "", std::stoi(min) + 1, INT_MAX);

    std::srand(std::time(nullptr));

    printLine("Generating a random number....");

    int ranNum = generateIntegerRange(std::stoi(min), std::stoi(max));
    printText("DONE. Your random number is: ");
    printLine(std::to_string(ranNum));

    std::string minList = "";
    printText("Please enter the minimum value for the each number in your list: ");
    enterString(minList); 
    printEnter();
    enterRange(minList, "Error: Minimun value must be a number", "Error: Minimum value must be an positive number", "Please enter the minimum value for the each number in your list: ", "", 0, INT_MAX);

    std::string maxList = "";
    printText("Please enter the maximum value for the each number in your list: ");
    enterString(maxList);
    printEnter();
    enterRange(maxList, "Error: Minimun value must be a number", "Error: Maximum value must be larger than minimum value", "Please enter the maximum value for the each number in your list: ", "", std::stoi(minList) + 1, INT_MAX);

    std::vector<int> listIntegerGenerated;

    printLine("Your list is ready. Generating the list of random numbers...");

    for (int i = 0; i < ranNum; ++i) {
        listIntegerGenerated.push_back(generateIntegerRange(std::stoi(minList), std::stoi(maxList)));
    }

    printText("DONE. Your list of random numbers: ");
    printList_int(listIntegerGenerated);
    printEnter();

    int quOddNum = cntOddNumber(listIntegerGenerated);
    int quEvenNum = cntEvenNumber(listIntegerGenerated);
    std::cout << std::format("The number of odd numbers in the list is: {}\nThe number of even numbers in the list is: {}\n\n",
                quOddNum, quEvenNum);

    printText("The prime numbers from the list: ");
    for (int k : listIntegerGenerated) {
        if (isPrime(k)) std::cout << k << " ";
    }
    std::cout << "\n\n";

    printText("Kết thúc chương trình!");

    return 0;
}