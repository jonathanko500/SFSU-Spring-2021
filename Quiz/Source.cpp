#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <vector>
using namespace std;


int main()
{
    int sum = 0, row = 0, col = 0;
    int count = 0;
    for (row = 0; row < 6; row = row + 2)
    {
        for (col = row; col < 5; col = col + 1)
        {
            sum += row * col;
            count++;
        }
    }

    cout << count << endl;
    cout << sum;

            


    return 0;
}
