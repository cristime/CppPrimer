#include <iostream>
// #include <algorithm>
int main()
{
    int l, r;
    std::cout << "Enter two numbers: ";
    std::cin >> l >> r;
    // l = std::min( l, r ); r = std::max( l, r );
    for (int count = l; count <= r; ++count)
        std::cout << count << " ";
    return 0;
}