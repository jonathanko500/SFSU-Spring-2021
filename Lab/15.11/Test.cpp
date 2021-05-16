#include <iostream>
#include "Person.h"
#include "Employee.h"

using namespace std;

int main()
{//start main
	Person** ppl;
	int p = 16, e = 12;
	int a = p + e;
	mixedArray(ppl, p, e);
	for (int i = 0; i < p + e; i++)
	{
		if (i < p)
		{
			cout << "PERSON " << endl;
		}
		else
		{
			cout << "EMPLOYEE " << endl;
		}
		ppl[i]->printALL();
		cout << "**********" << endl;
	}
	deleteMixedArray(ppl, a);

	return 0;
}//end main
