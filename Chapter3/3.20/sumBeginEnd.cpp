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

    for (auto it1 = vec.begin(), it2 = vec.end() - 1; it1 <= it2; ++it1, --it2)
        cout << (*it1) + (*it2) << endl;

    return 0;
}