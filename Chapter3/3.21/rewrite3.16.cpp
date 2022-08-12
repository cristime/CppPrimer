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
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    cout << "Vector v2:\tSize: " << v2.size() << "\tValues: ";
    for (auto it = v2.begin(); it != v2.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    cout << "Vector v3:\tSize: " << v3.size() << "\tValues: ";
    for (auto it = v3.begin(); it != v3.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    cout << "Vector v4:\tSize: " << v4.size() << "\tValues: ";
    for (auto it = v4.begin(); it != v4.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    cout << "Vector v5:\tSize: " << v5.size() << "\tValues: ";
    for (auto it = v5.begin(); it != v5.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    cout << "Vector v6:\tSize: " << v6.size() << "\tValues: ";
    for (auto it = v6.begin(); it != v6.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    cout << "Vector v7:\tSize: " << v7.size() << "\tValues: ";
    for (auto it = v7.begin(); it != v7.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    return 0;
}