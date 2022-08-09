#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter a couple of words.\n";

    string input, final;
    while (cin >> input)
        final.append(input);

    cout << "The final string is:\n"
         << final << endl;

    return 0;
}