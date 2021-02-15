#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.;
};

int main() {
    Sales_data sd1;
    std::cout << sd1.bookNo << std::endl;
    std::cout << sd1.units_sold << std::endl;
    std::cout << sd1.revenue << std::endl;
    return 0;
}
