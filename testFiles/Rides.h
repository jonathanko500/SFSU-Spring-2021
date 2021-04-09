#include <string>
#ifndef RIDES_H
#define RIDES_H

using namespace std;

//declare class
class Rides
{//start class
	//initialize private variable
private:
	string distance;//distance of trip
	string company;//uber vs lyft
	string companyType;//diff choice of company
//initialize functions
public:
	Rides();	
	string getDistance();
	string getCompany();
	string getCompanyTypes();
};//end class

#endif

