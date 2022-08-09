#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    cout << "Read some numbers\n";

    vector<int> vec;
    for (int x = 0; cin >> x;)
        vec.emplace_back(x);
    for (auto& i : vec)
        cout << i << ' ';

    return 0;
}