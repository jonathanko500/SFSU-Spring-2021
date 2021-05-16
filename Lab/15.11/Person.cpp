#include "Person.h"

using namespace std;

//default
Person::Person() :SSN(0), name("na"), personalEmail("personal@"), cntPlaces(10)
{//start
	placesVisited = new string[cntPlaces];
	for (int i = 0; i < cntPlaces; i++)
	{
		placesVisited[i] = "unknown";
	}
}//end

//big 3

//destructor
Person::~Person()
{//start
	if (placesVisited != nullptr)
	{
		delete[] placesVisited;
		placesVisited = nullptr;
	}
}//end

//copy
Person::Person(const Person& clone):SSN(clone.SSN), name(clone.name), personalEmail(clone.personalEmail), cntPlaces(clone.cntPlaces)
{//start
	placesVisited = new string[cntPlaces];
	for (int i = 0; i < cntPlaces; i++)
	{
		placesVisited[i] = clone.placesVisited[i];
	}
}//end

//opertor =
Person Person :: operator= (const Person& rhs)
{//start
	SSN = rhs.SSN;
	name = rhs.name;
	personalEmail = rhs.personalEmail;
	cntPlaces = rhs.cntPlaces;
	delete[] placesVisited;
	placesVisited = new string[cntPlaces];
	for (int i = 0; i < cntPlaces; i++)
	{
		placesVisited[i] = rhs.placesVisited[i];
	}
	return *this;
}//end

//other functions

string Person :: getEmail() const
{//start
	return personalEmail;
}//end 

void Person::setEmail(string new_email)
{//start
	personalEmail = new_email;
}//end

string Person::getTypeOfObj() const
{//start
	return "Person";
}//end

string Person::getPlace(int i) const
{//start
	if (i < 0 || i >= cntPlaces) {
		return "out-of-boundary";
	}
	return placesVisited[i];
}//end

void Person::printALL()
{//start
	cout << SSN << endl;
	cout << name << endl;
	cout << personalEmail << endl;
	cout << cntPlaces << endl;
	for (int i = 0; i < cntPlaces; i++)
	{
		if (i != (cntPlaces - 1))
		{
			cout << placesVisited[i] << ", ";
		}
		else
		{
			cout << placesVisited[i] << endl;
		}
	}
}//end