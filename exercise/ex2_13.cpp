#include <iostream>

int i = 42;

int main() {
    int i = 100;
    int j = i;
    std::cout << "j with local i = " << j << std::endl;
    j = ::i;
    std::cout << "j with global i = " << j << std::endl;
    return 0;
}
