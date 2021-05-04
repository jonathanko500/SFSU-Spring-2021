#include <iostream>
#include "VectorADT.h"


using namespace std;


int main()
{//start
	VectorADT v1;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i * 8.6);
	}

	cout << v1 << endl;

	VectorADT v2(v1);

	v2.pop_back();

	cout << v2 << endl;


	for (int i = 0; i < v2.length(); i++)
	{
		v2.push_back(i * 8.6);
	}

	cout << v2 << endl;
	
}//end