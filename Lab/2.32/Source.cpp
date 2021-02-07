#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	double start, freq;
	//start = starting freq
	// freq = calc freq
	cin >> start;
	int n = 4;
	//n = # of freq

	double r = pow(2.0, (1 / 12.0));

	//formula = fn = start * r^n

	for (int i = 0; i <= n; i++)
	{
		freq = start * pow(r, i);

		if (i == 4)
		{
			cout << fixed << setprecision(2) << freq;
		}
		else
		{
			cout << fixed << setprecision(2) << freq;
		}
		cout << " ";
	}
	cout << endl;
	return 0;
}
