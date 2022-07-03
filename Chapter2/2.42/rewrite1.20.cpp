#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data book;
    std::cout << "Enter some information:\n";
    while ( std::cin >> book.bookNo >> book.units_sold >> book.revenue )
        std::cout << book.bookNo << " "
                  << book.units_sold << " "
                  << book.revenue << " "
                  << ( book.units_sold ? book.revenue / book.units_sold : 0 )
                  << std::endl;
    return 0;
}