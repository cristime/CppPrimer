#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Please enter two string ending with [ENTER]\n";

    string a, b;
    getline(cin, a);
    getline(cin, b);

    if (a == b)
        cout << "The string A is equal to string B.\n";
    else
        cout << "The string " << (a > b ? a : b) << " is bigger.\n";

    return 0;
}