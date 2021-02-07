#include <iostream>
using namespace std;

int main()
{//start main
	//declare variable to store phone numbers,its area code, prefix and line number.

	long long phone_number;

	int area_code, prefix,line_number;

	cout<<"Enter 10-digit phone number:"<<endl;

	//input 10-digit phone number

	cin>>phone_number;

	

	area_code = phone_number/10000000;

	prefix = (phone_number/10000)%1000;

	line_number = phone_number%10000;

	

	cout<<"(" << area_code << ") "<<prefix<<"-"<<line_number<<endl;

   return 0;
}//end main
