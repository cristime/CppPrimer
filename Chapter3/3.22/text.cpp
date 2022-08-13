#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;

    vector<string> text {
        "The sky is blue.",
        "The grass is green.",
        "The water is clean.",
        "The candy is sweet.",
        "",
        "And I love you."
    };

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
        transform(it->begin(), it->end(), it->begin(), ::toupper);

    for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
        cout << *it << endl;

    return 0;
}