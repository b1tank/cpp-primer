#include <iostream>

int main() {
    int i, *const cp; // cp is illegal
    int *p1, *const p2; // p2 is illegal
    const int ic, &r = ic; // ic is illegal
    const int *const p3; // p3 is illegal
    const int *p; // legal

    i = ic; // legal
    p1 = p3; // illegal
    p1 = &ic; // illegal
    p3 = &ic; // illegal
    p2 = p1; // illegal
    ic = *p3; // illegal
    return 0;
}
