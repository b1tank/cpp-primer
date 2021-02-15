#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item;
    if (std::cin >> item) {
        Sales_item cur_item(item);
        int cnt = 1;
        while (std::cin >> item) {
            if (cur_item.isbn() == item.isbn()) {
                cnt++;
            } else {
                std::cout << "The ISBN " << cur_item.isbn() << " occurred " << cnt << " times." << std::endl;
                cur_item = item;
                cnt = 1;
            }
        }
        std::cout << "The ISBN " << cur_item.isbn() << " occurred " << cnt << " times." << std::endl;
    }
    return 0;
}
