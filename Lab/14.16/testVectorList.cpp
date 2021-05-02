//main
#include <iostream>
#include "ListADT.h"
#include "VectorADT.h"

using namespace std;

int main()
{//start main
	VectorADT a;

	//test push_back

	cout << "push back" << endl;

	a.push_back(2);

	a.push_back(27);

	a.push_back(5);

	a.push_back(4);

	a.push_back(73);

	a.push_back(6);

	a.push_back(7);

	a.push_back(73);

	a.push_back(6);

	a.push_back(7);

	a.push_back(73);

	a.push_back(6);

	cout << a << endl;

	//test pop_back()
	cout << "a.pop_back()" << endl;

	a.pop_back();

	cout << a << endl;

	//test relength()

	a.resize(10);

	cout << "after a.resize(10); the capacity is " << endl;

	VectorADT b, c, d;

	b.push_back(3);

	b.push_back(5);

	b.push_back(7);

	c.push_back(1);

	c.push_back(2);

	c.push_back(3);

	cout << "Vector b : ";

	cout << b << endl;

	cout << "Vector c : ";

	cout << c << endl;

	d = b + c;

	cout << "[Vector d = b + c <<  ]capacity is : ";

	cout << d << endl;


	
	return 0;
}//end main