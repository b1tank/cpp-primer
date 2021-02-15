#include <iostream>

int main() {
    int i = -1, &r = 0; // illegal, r must refer to an object

    const int i1 = -1, &r1 = 0; // legal

    const int *p1 = &i; // legal

    const int i3 = i, &r2 = i; // legal

    int *const p2 = &i; // legal

    const int *const p3 = &i; // legal   

    const int &const r3; // illegal
    return 0;
}
