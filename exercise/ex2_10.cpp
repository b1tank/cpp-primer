#include <iostream>
#include <string>

std::string global_str;
int global_int;

int main() {
    int local_int;
    std::string local_str;
    if (global_str == "") {
        std::cout << "global string is empty" << std::endl;
    }
    if (global_int == 0) {
        std::cout << "global int is 0" << std::endl;
    }
    if (local_str == "") {
        std::cout << "local string is empty" << std::endl;
    }
    if (local_int == 0) {
        std::cout << "local int is 0" << std::endl;
    } else {
        std::cout << "local int is undefined" << std::endl;
    }

    return 0;
}
