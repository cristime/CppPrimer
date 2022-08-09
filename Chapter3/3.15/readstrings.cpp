#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;

    cout << "Read some strings\n";

    vector<string> vec;
    for (string x; cin >> x;)
        vec.emplace_back(x);
    for (auto& i : vec)
        cout << i << endl;

    return 0;
}