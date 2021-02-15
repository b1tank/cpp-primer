#include <iostream>

int main() {
    int start = 0, end = 0;
    std::cin >> start >> end;
    int i = start;
    for (int i = start; i <= end; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
