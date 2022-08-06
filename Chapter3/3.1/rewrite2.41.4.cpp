#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    map< string, int > mp;
    Sales_data item;
    double price = 0.0;

    cout << "Enter some sale records with the same ISBN: \n";
    if ( cin >> item.bookNo >> item.units_sold >> price ) {
        mp[ item.bookNo ]++;
        while ( cin >> item.bookNo >> item.units_sold >> price )
            mp[ item.bookNo ]++;
        for ( auto iter = mp.begin(); iter != mp.end(); ++iter )
            cout << "ISBN: " << iter->first << '\t'
                      << "Records: " << iter->second << endl;
    } else
        cerr << "No data" << endl;
    
    return 0;
}