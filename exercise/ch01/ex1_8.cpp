#include <iostream>

int main() {
    std::cout << "/*";
    std::cout << "*/";
    // wrong one: std::cout << /* "*/" */;
    std::cout << /* "*/" */";
    std::cout << /*  "*/" /* "/*" */;
    std::cout << std::endl;
    return 0;
}
