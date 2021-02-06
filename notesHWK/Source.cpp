#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string passCode;

    cin >> passCode;

    for (int i = 0; i < passCode.size(); i++)
    {
        if (isalpha(passCode.at(i)) == true)
        {
            passCode.replace(passCode.at(i), passCode.size(), "_");
        }
    }

    cout << passCode << endl;
    return 0;
}