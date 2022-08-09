#include "Sales_item.h"

int main()
{
    Sales_item item, ans;
    std::cout << "Enter some sale records with the same ISBN: \n";
    if (std::cin >> item) {
        ans = item;
        while (std::cin >> item) {
            if (!compareIsbn(item, ans)) {
                std::cerr << "Different ISBNs\n";
                return -1;
            }
            ans += item;
        }
        std::cout << "Sum of the records is: " << ans << std::endl;
    } else
        std::cerr << "No data" << std::endl;
    return 0;
}