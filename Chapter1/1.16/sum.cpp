#include <iostream>
int main()
{
    int sum = 0, num;
    std::cout << "Enter some numbers: ";
    while (std::cin >> num)
        sum += num;
    std::cout << "Sum of the numbers you've entered is " << sum << std::endl;
    return 0;
}