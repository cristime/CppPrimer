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

    for (auto iter = vec.begin(); iter + 1 != vec.end(); ++iter)
        cout << (*iter) + *(iter + 1) << endl;

    return 0;
}