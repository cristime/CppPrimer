#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a word: ";

    string str;
    cin >> str;

    for (string::size_type pos = 0; pos < str.length(); ++pos)
        str[pos] = 'X';

    cout << "Replaced word: " << str << endl;

    return 0;
}