#include <iostream>
#include <fstream>
#include "Rides.h"

using namespace std;

Rides::Rides()
{//declare constructor
	ifstream ride;
	ride.open("cab_rides.csv");
	if (!ride.is_open())
	{//file !found
		distance = "0";
		company = "nothing";
		companyType = "nothing";
	}
	else
	{//file found
		distance = "1";
		company = "something";
		companyType = "something";
	}
}//end constructor

