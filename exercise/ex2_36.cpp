#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a; // int
    decltype((b)) d = a; // int &
    ++c; // 4
    std::cout << c << std::endl;
    ++d; // 4
    std::cout << d << std::endl;
    return 0;
}
