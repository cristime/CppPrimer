#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    cout << "Enter some scores: ";

    vector<unsigned> scores(11, 0);
    unsigned grade;

    while (cin >> grade) {
        if (grade <= 100)
            (*(scores.begin() + grade / 10))++;
    }

    cout << "Grades: \n";

    for (auto& el : scores)
        cout << el << endl;

    return 0;
}