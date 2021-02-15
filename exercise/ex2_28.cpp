#include <iostream>

int main() {
    int i, *const cp; // cp is illegal
    int *p1, *const p2; // p2 is illegal
    const int ic, &r = ic; // ic is illegal
    const int *const p3; // p3 is illegal
    const int *p; // legal
    return 0;
}
