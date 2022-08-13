#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    vector<int> vec;
    int x;

    cout << "Enter some integers: ";

    while (cin >> x)
        vec.emplace_back(x);

    for (auto it = vec.begin(); it != vec.end(); ++it)
        *it *= 2;

    for (auto& el : vec)
        cout << el << endl;

    return 0;
}