#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    double price = 0.0;
    Sales_data item, ans;
    std::cout << "Enter some sale records with the same ISBN: \n";

    if (std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        ans = item;
        while (std::cin >> item.bookNo >> item.units_sold >> price)
        {
            item.revenue = item.units_sold * price;
            if (item.bookNo != ans.bookNo) {
                std::cerr << "Different ISBNs\n";
                return -1;
            }
            ans.units_sold += item.units_sold;
            ans.revenue += item.revenue;
        }
        std::cout << "Sum of the records is: " << ans.bookNo << " "
                  << ans.units_sold << " "
                  << ans.revenue << " "
                  << (ans.units_sold ? ans.revenue / ans.units_sold : 0)
                  << std::endl;
    } else
        std::cerr << "No data" << std::endl;
    return 0;
}