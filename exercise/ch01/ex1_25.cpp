#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item;
    if (std::cin >> item) {
        Sales_item total(item);
        while (std::cin >> item) {
            if (total.isbn() == item.isbn()) {
                total += item;
            } else {
                std::cout << "The total report for ISBN " << total.isbn() << " is " << total << std::endl;
                total = item;
            }
        }
        std::cout << "The total report for ISBN " << total.isbn() << " is " << total << std::endl;
    } else {
        std::cerr << "No data!" << std::endl;
        return -1;
    }
    return 0;
}
