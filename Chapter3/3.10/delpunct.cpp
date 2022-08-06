#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using namespace std;

    cout << "Enter a line.\n";
    
    string str;
    getline(cin, str);

    for (auto iter = str.begin(); iter != str.end(); ++iter)
        if (ispunct(*iter))
            str.erase(iter);

    cout << "Final string: " << str << endl;

    return 0;
}