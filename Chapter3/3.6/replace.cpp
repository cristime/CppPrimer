#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a word: ";

    string str;
    cin >> str;

    for ( auto &c : str )
        c = 'X';
    
    cout << "Replaced word: " << str << endl;

    return 0;
}