#include <iostream>

int main() {
    const int v2 = 0; // top
    int v1 = v2; 
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // low, top&low, low

    r1 = v2; // legal, top
    p1 = p2; p2 = p1; // illegal, low; legal 
    p1 = p3; p2 = p3; // illegal, low; legal
    return 0;
}
