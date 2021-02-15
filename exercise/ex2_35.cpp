#include <iostream>

int main() {
    const int i = 42; 

    auto j = i; // int
    j = 1;
    std::cout << "j = " << j << std::endl;

    const auto &k = i; // const int &
    k = 2; // illegal

    auto *p = &i; // pointer to const int
    *p = 3; // illegal

    const auto j2 = i, &k2 = i; // const int, const int &
    j2 = 4; // illegal
    k2 = 5; // illegal

    return 0;
}
