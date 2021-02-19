#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    const int NUM_VALS = 4;
    vector<int> courseGrades(NUM_VALS);
    int i;

    for (i = 0; i < courseGrades.size(); ++i)
    {
        cin >> courseGrades.at(i);
    }

    for (i = 0; i < courseGrades.size(); ++i)
    {
        if (i < courseGrades.size() - 1)
        {
            cout << courseGrades.at(i) << " ";
        }
        else
        {
            cout << courseGrades.at(i) << " ";
        }
    }
    cout << endl;
    for (i = courseGrades.size() - 1; i > -1; --i)
    {
        if (i == 0)
        {
            cout << courseGrades.at(i) << " ";
        }
        else
        {
            cout << courseGrades.at(i) << " ";
        }
    }
    cout << endl;

    return 0;
}