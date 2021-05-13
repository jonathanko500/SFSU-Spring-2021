#include <iostream>
#include "Person.h"
using namespace std;

int main()
{//start main
	Person p1;
	cout << p1.getEmail()<<endl;
	p1.printALL();
	cout << "************" << endl;
	Person p2 = p1;
	p2.setEmail("jkko");
	p2.printALL();
}//end main
