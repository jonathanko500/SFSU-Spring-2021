#include <iostream>
#include <fstream>
#include "Rides.h"

using namespace std;

Rides::Rides()
{
	ifstream ride;
	ride.open("cab_rides.csv", ios::in);
	if (!ride.is_open())
	{
		cout << "file !open";
	}

}