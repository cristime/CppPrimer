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
    double price = 0.0;
    Sales_data item, ans;
    cout << "Enter some sale records with the same ISBN: \n";

    if (cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        ans = item;
        while (cin >> item.bookNo >> item.units_sold >> price) {
            item.revenue = item.units_sold * price;
            if (item.bookNo != ans.bookNo) {
                cerr << "Different ISBNs\n";
                return -1;
            }
            ans.units_sold += item.units_sold;
            ans.revenue += item.revenue;
        }
        cout << "Sum of the records is: " << ans.bookNo << " " << ans.units_sold
             << " " << ans.revenue << " "
             << (ans.units_sold ? ans.revenue / ans.units_sold : 0) << endl;
    } else
        cerr << "No data" << endl;
    return 0;
}