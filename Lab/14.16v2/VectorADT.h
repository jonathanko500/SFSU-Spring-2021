#include <iostream>
#ifndef VECTORADT_H
#define VECTORADT_H

using namespace std;

class VectorADT
{//start class
private:
	double* array;
	int size;    //the number of doubles stored in array
	int capacity;  //the maximum number of doubles that can be stored in array

public:
	//default constructor
	VectorADT();

	//big 3
	~VectorADT();//destructor	
	VectorADT(const VectorADT& orig);//copy
	void operator= (const VectorADT& copy);//assignment operator

	//other functions
	void push_back(double val);//add val to end of array
	void resize(int newSize);//resize array
	void pop_back();//delete last element of array
	int length() const;//return size
	double& operator[](const int& pt);//return specific element
	VectorADT operator+ (VectorADT add);//add two adt arrats
	friend std::ostream& operator<<(std::ostream& out, const VectorADT& pt);//prints array
	int curr_capacity() const;

};//end class


#endif