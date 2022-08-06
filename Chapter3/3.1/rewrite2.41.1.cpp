#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data book;
    cout << "Enter some information:\n";
    while ( cin >> book.bookNo >> book.units_sold >> book.revenue )
        cout << book.bookNo << " "
                  << book.units_sold << " "
                  << book.revenue << " "
                  << ( book.units_sold ? book.revenue / book.units_sold : 0 )
                  << endl;
    return 0;
}