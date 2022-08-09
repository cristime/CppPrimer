#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;

    cout << "Input some words:\n";

    string str;

    vector<string> vec;
    while (cin >> str)
        vec.emplace_back(str);

    for (auto& eachWord : vec)
        // for (auto& eachChar : eachWord)
        // eachChar = toupper(eachChar);
        transform(eachWord.begin(), eachWord.end(), eachWord.begin(), ::toupper);

    for (auto& eachWord : vec)
        cout << eachWord << endl;

    return 0;
}