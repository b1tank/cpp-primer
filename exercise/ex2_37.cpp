#include <iostream>

int main() {
    int a = 3, b = 4;
    decltype(a) c = a; // int
    decltype(a = b) d = a; // int & 3 (no evaluation effect for a = b, while it does return a type of reference!)
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    return 0;
}
