#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a couple of words:\n";

    string input;
    while (cin >> input)
        cout << input << endl;

    return 0;
}