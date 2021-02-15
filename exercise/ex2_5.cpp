#include <iostream>

int main() {
    const char* c1 = u8"a";
    char16_t c2 = u'a';
    char32_t c3 = U'a';
    wchar_t c4 = L'a';
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c3 << std::endl;
    std::cout << c4 << std::endl;
    int i1 = 10;
    unsigned int i2 = 10u;
    long int i3 = 10L;
    unsigned long int i4 = 10uL;
    int i5 = 012;
    int i6 = 0xC;
    std::cout << i1 << std::endl;
    std::cout << i2 << std::endl;
    std::cout << i3 << std::endl;
    std::cout << i4 << std::endl;
    std::cout << i5 << std::endl;
    std::cout << i6 << std::endl;
    double f1 = 3.14;
    float f2 = 3.14f;
    long double f3 = 3.14L;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;
    int d1 = 10;
    unsigned int d2 = 10u;
    float d3 = 10.;
    double d4 = 10e-2;
    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;
    std::cout << d3 << std::endl;
    std::cout << d4 << std::endl;
    return 0;
}
