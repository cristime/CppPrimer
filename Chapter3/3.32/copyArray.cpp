#include <iostream>

int main()
{
    using namespace std;

    const int ArraySize = 10;
    int arr[ArraySize] = {};

    for (int i = 0; i < ArraySize; ++i)
        arr[i] = i;

    int arr1[ArraySize] = {};
    copy(arr, arr + ArraySize, arr1);

    cout << "Array: \n";
    for (auto& el : arr1)
        cout << el << endl;

    return 0;
}