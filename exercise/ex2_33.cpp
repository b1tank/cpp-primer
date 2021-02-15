#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;
    a = 42; // just change the int value
    const int ci = i, &cr = ci;
    auto b = ci;
    b = 42; // legal
    auto c = cr;
    c = 42; // legal
    auto d = &i;
    d = 42; // illegal, int to address
    auto e = &ci;
    e = 42; // illegal, int to address of pointer to const int
    auto &g = ci;
    g = 42; // illegal
    return 0;
}
