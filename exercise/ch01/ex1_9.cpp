#include <iostream>

int main() {
    int start = 50, sum = 0;
    while (start <= 100) {
        sum += start++;
    }
    std::cout << "The result is " << sum << std::endl;
    return 0;
}
