#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    double price = 0.0;
    Sales_data item1, item2;

    std::cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = item1.units_sold * price;
    std::cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = item2.units_sold * price;

    if (item1.bookNo != item2.bookNo)
        std::cerr << "Data must refer to the same ISBN\n";
    else {
        item1.units_sold += item2.units_sold;
        item1.revenue += item2.revenue;
        std::cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue
                  << " "
                  << (item1.units_sold ? item1.revenue / item1.units_sold : 0)
                  << std::endl;
    }

    return 0;
}