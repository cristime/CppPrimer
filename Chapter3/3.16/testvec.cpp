#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4 { 10 };
    vector<int> v5 { 10, 42 };
    vector<string> v6(10);
    vector<string> v7(10, "hi");

    cout << "Vector v1:\tSize: " << v1.size() << "\tValues: ";
    for (auto& i : v1)
        cout << i << ' ';
    cout << endl;

    cout << "Vector v2:\tSize: " << v2.size() << "\tValues: ";
    for (auto& i : v2)
        cout << i << ' ';
    cout << endl;

    cout << "Vector v3:\tSize: " << v3.size() << "\tValues: ";
    for (auto& i : v3)
        cout << i << ' ';
    cout << endl;

    cout << "Vector v4:\tSize: " << v4.size() << "\tValues: ";
    for (auto& i : v4)
        cout << i << ' ';
    cout << endl;

    cout << "Vector v5:\tSize: " << v5.size() << "\tValues: ";
    for (auto& i : v5)
        cout << i << ' ';
    cout << endl;

    cout << "Vector v6:\tSize: " << v6.size() << "\tValues: ";
    for (auto& i : v6)
        cout << i << ' ';
    cout << endl;

    cout << "Vector v7:\tSize: " << v7.size() << "\tValues: ";
    for (auto& i : v7)
        cout << i << ' ';
    cout << endl;

    return 0;
}