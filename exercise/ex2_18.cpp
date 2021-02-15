#include <iostream>

int main() {
    int i = 1, j = 2, *pi = &i;
    std::cout << "pi value is " << pi << std::endl;
    std::cout << "pi object value is " << *pi << std::endl;
    pi = &j;
    std::cout << "pi points to j... " << std::endl;
    std::cout << "pi value is " << pi << std::endl;
    std::cout << "pi object value is " << *pi << std::endl;
    *pi = 3;
    std::cout << "pi object value changes ... " << std::endl;
    std::cout << "pi value is " << pi << std::endl;
    std::cout << "pi object value is " << *pi << std::endl;
    return 0;
}
