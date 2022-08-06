#include <iostream>
int main()
{
    using std::cout, std::endl;
    int sum = 0, count = 50;
    while ( count <= 100 )
    {
        sum += count;
        ++count;
    }
    cout << "Sum of [50, 100] is: " << sum << endl;
    return 0;
}