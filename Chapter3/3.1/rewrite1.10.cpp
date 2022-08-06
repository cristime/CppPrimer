#include <iostream>
int main()
{
    using std::cout;
    int count = 10;
    while ( count >= 0 )
    {
        cout << count << " ";
        --count;
    }
    return 0;
}