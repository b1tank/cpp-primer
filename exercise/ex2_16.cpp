#include <iostream>

int main() {
    int i = 0, &r1 = i; 
    double d = 0, &r2 = d;

    r2 = 3.14159; // d = 3.14159
    r2 = r1; // d = i = 0
    i = r2; // i = d = 0
    r1 = d; // i = d = 0
    std::cout << i << std::endl;
    std::cout << d << std::endl;
    return 0;
}
