#include "Sales_item.h"
#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> mp;
    Sales_item item;
    std::cout << "Enter some sale records with the same ISBN: \n";
    if (std::cin >> item) {
        mp[item.isbn()]++;
        while (std::cin >> item)
            mp[item.isbn()]++;
        for (auto iter = mp.begin(); iter != mp.end(); ++iter)
            std::cout << "ISBN: " << iter->first << '\t'
                      << "Records: " << iter->second << std::endl;
    } else
        std::cerr << "No data" << std::endl;
    return 0;
}
