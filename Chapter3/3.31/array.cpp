#include <iostream>

int main()
{
    using namespace std;

    const int ArraySize = 10;
    int arr[ArraySize] = {};

    for (int i = 0; i < ArraySize; ++i)
        arr[i] = i;

    cout << "Array: \n";
    for (auto& el : arr)
        cout << el << endl;

    return 0;
}