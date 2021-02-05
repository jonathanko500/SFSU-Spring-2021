#include <iostream>
#include <cstdlib>   // Enables use of rand()
using namespace std;

int main()
{
	int seedVal;

	cin >> seedVal;

	srand(seedVal);

	cout << (rand() % 10) + seedVal << endl;
	cout << (rand() % 10) + seedVal << endl;

	return 0;
}