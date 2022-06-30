#include <iostream>
// #include <algorithm>
int main()
{
    int l, r;
    std::cout << "Enter two numbers: ";
    std::cin >> l >> r;
    // l = std::min( l, r ); r = std::max( l, r );
    while ( l <= r )
    {
        std::cout << l << " ";
        ++l;
    }
    return 0;
}