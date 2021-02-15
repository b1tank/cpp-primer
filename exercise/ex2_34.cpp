#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;
    std::cout << "before: a = " << a << std::endl;
    a = 42; // just change the int value
    std::cout << "after : a = " << a << std::endl;
    const int ci = i, &cr = ci;
    auto b = ci;
    std::cout << "before: b = " << b << std::endl;
    b = 42; // legal
    std::cout << "after : b = " << b << std::endl;
    auto c = cr;
    std::cout << "before: c = " << c << std::endl;
    c = 42; // legal
    std::cout << "after : c = " << c << std::endl;

    // auto d = &i;
    // std::cout << "before: d = " << d << std::endl;
    // d = 42; // illegal, int to address
    // std::cout << "after : d = " << d << std::endl;
    // auto e = &ci;
    // std::cout << "before: e = " << e << std::endl;
    // e = 42; // illegal, int to address of pointer to const int
    // std::cout << "after : e = " << e << std::endl;
    // auto &g = ci;
    // std::cout << "before: g = " << g << std::endl;
    // g = 42; // illegal
    // std::cout << "after : g = " << g << std::endl;
    return 0;
}
