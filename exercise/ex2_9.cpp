#include <iostream>

int main() {
    // int i = 3.14; // truncated
    int i = {3.14}; // complained by C++11 compiler
    std::cin >> int input;
    double a = b = 1.99;
    return 0;
}
