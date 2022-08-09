#include <iostream>
#include <string>

int main()
{
    using std::endl, std::cin, std::cout, std::getline, std::string;

    string input;
    // Read lines
    // cout << "Input a couple of lines." << endl;
    // while (getline(cin, input))
    //     cout << input << endl;
    // Read words
    cout << "Input a couple of words." << endl;
    while (cin >> input)
        cout << input << endl;
    return 0;
}