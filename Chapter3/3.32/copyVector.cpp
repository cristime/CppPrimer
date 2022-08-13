#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    const int VecSize = 10;
    vector<int> vec;

    for (int i = 0; i < VecSize; ++i)
        vec.emplace_back(i);

    vector<int> vec2(vec);

    cout << "Vector: \n";
    for (auto& el : vec2)
        cout << el << endl;

    return 0;
}