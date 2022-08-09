#include <iostream>
int main()
{
    int l, r;
    std::cout << "Enter two numbers: ";
    std::cin >> l >> r;
    if (l > r) {
        int t = l;
        l = r;
        r = t;
    }
    for (int count = l; count <= r; ++count)
        std::cout << count << " ";
    return 0;
}