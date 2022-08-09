#include <iostream>
#include <map>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    std::map<std::string, int> mp;
    Sales_data item;
    double price = 0.0;

    std::cout << "Enter some sale records with the same ISBN: \n";
    if (std::cin >> item.bookNo >> item.units_sold >> price) {
        mp[item.bookNo]++;
        while (std::cin >> item.bookNo >> item.units_sold >> price)
            mp[item.bookNo]++;
        for (auto iter = mp.begin(); iter != mp.end(); ++iter)
            std::cout << "ISBN: " << iter->first << '\t'
                      << "Records: " << iter->second << std::endl;
    } else
        std::cerr << "No data" << std::endl;

    return 0;
}