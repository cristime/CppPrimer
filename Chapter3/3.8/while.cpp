#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a word: ";

    string str;
    cin >> str;

    string::size_type pos = 0;
    while (pos < str.length())
        str[pos++] = 'X';
        
    
    cout << "Replaced word: " << str << endl;

    return 0;
}