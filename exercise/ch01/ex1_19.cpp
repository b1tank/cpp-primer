#include <iostream>

int main() {
    int start = 0, end = 0;
    std::cin >> start >> end;
    while (start >= end) {
        std::cout << "The first number has to be smaller than the second one!" << std::endl;
        std::cin >> start >> end;
    }
    for (int i = start; i <= end; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
