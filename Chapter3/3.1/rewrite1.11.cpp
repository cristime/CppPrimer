#include <iostream>
// #include <algorithm>
int main()
{
    using std::cout, std::cin;

    int l, r;
    cout << "Enter two numbers: ";
    cin >> l >> r;
    // l = std::min( l, r ); r = std::max( l, r );
    while (l <= r) {
        cout << l << " ";
        ++l;
    }
    return 0;
}