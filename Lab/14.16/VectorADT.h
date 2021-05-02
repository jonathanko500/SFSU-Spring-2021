#ifndef VECTORADT_H
#define VECTORADT_H

class VectorADT
{//start class
private:
	double * array;
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
	void push_pack(double val);
	void resize(int newSize);
	VectorADT operator[ ](const VectorADT& in);
	VectorADT operator+ (const VectorADT& copy);
	VectorADT operator<< (const VectorADT& copy);	
	void pop_back();
	int length() const;
	int curr_capacity() const;

};//end class


#endif