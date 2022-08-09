#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Please enter two string ending with [ENTER]\n";

    string a, b;
    getline(cin, a);
    getline(cin, b);

    if (a.length() == b.length())
        cout << "The length of string A is equal to string B.\n";
    else
        cout << "The string " << (a.length() > b.length() ? a : b)
             << " is longer.\n";

    return 0;
}