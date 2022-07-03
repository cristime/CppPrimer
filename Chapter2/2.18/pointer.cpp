#include <iostream>

int main()
{
    int i = 2, j = 3, *p = &i;
    std::cout << "Pointer p points to " << *p << '\n';
    *p = 5;
    std::cout << "Now the value of *p is " << *p << '\n';
    p = &j;
    std::cout << "Now pointer p points to " << *p << '\n';
    return 0;
}