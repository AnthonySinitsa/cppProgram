#include <iostream>

int readNumber() {
    std::cout << "Input num:";
    int input;
    std::cin >> input;
    return input;
}

void writeAnswer(int input) {
    std::cout << "Your input: " << input << "\n";
}