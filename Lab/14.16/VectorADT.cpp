#include "VectorADT.h"

using namespace std;

//defualt constructor
VectorADT::VectorADT() :size(0), capacity(10)
{//start
	array = new double[capacity];
	//initalize all vals to 0.0
	for (int i = 0; i < capacity; i++)
	{
		array[i] = 0.0;
	}
}//end


void VectorADT::printEverything()
{
	cout << "capacity = " << capacity << endl;
	cout << "size = " << size << endl;
	if (array != nullptr)
	{
		for (int i = 0; i < capacity; i++)
		{
			cout << array[i] << ", ";
		}
		cout << endl;
	}
	else
	{
		cout << "nullptr" << endl;
	}
	
}

//big 3

//destructor
VectorADT::~VectorADT()
{//start
	if (array != nullptr)
	{//check to see if pointer is pointing to something
		//delete pointee
		delete [ ] array;
		//point to null pointee
		array = nullptr;
		size = 0;
		capacity = 0;
	}
}//end

//copy
VectorADT::VectorADT(const VectorADT& orig): size(orig.size), capacity(orig.capacity)
{//start
	//make new
	
	array = new double[capacity];
	for (int i = 0; i < size; i++)
	{
		
		array[i] = orig.array[i];
	}
}//end

//assignment operator
void VectorADT::operator= (const VectorADT& copy)
{//start
	capacity = copy.capacity;
	size = copy.size;
	array = new double[capacity];
	for (int i = 0; i < size; i++)
	{
		array[i] = copy.array[i];
	}
}//end




//other functions

//push_back
void VectorADT::push_back(double val)
{//start
	if (capacity == 0)
	{//check to see if array is 1 element
		//make array to a 2 element array
		array = new double[1];
		array[0] = val;
		size++;
		capacity++;
	}
	else if (capacity > size)
	{//size inc if array has room
		array[size] = val;
		size++;
	}
	else
	{
		double* temp = nullptr;

		try
		{
			temp = new double[capacity + 1];
			
		}
		catch (bad_alloc& x)
		{
			cerr << "VectorADT push_back: " << endl;
		}
		for (int i = 0; i < size; i++)
		{
			temp[i] = array[i];
			temp[size] = val;
			delete array;
			array = temp;
			size++;
			capacity++;
		}
	}
}//end

//resize
void VectorADT::resize(int newSize)
{//start
	if (newSize <= size)
	{//makes current array with new size
		size = newSize;
	}
	else
	{//start newSize > size
		//new array needed to accomadqate for new size
		if (newSize <= capacity)
		{
			double* temp = new double[newSize];

			for (int i = 0; i < size; i++)
			{
				//set elements of temp[] to array[]
				temp[i] = array[i]; 
				delete[] array;
				array = temp;
			}			
		}
		else
		{//newSize > capacity
			capacity = 2 * newSize;
			double* temp = new double[newSize];
			for (int i = 0; i < size; i++)
			{
				//set elements of temp[] to ptr[]
				temp[i] = array[i]; 
				delete[] array;
				array = temp;
			}			
		}
		size = newSize;
	}//end newSize > size
}//end

//pop back
void VectorADT::pop_back()
{//start
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (i = (size-1))
			{
				array[i] = 0.0;
			}
		}
		size--;
	}
	else
	{
		size = 0;
	}
}//end

//length
int VectorADT::length() const
{//start
	return size;
}//end 

//operator []
double& VectorADT::operator[](const int& pt)
{//start
	return array[pt];
}//end

//operator +
VectorADT VectorADT:: operator+ (VectorADT add)
{//start
	VectorADT plus;
	if (size == add.length())
	{//make sure size of two ADT are same
		for (int i = 0; i < size; i++)
		{//start adding elements of two ADT into plus ADT
			plus.push_back(array[i] + add[i]);
		}
	}
	return plus;
}//end

//curr capacity
int VectorADT::curr_capacity() const
{//start
	return capacity;
}//end


//operator <<
ostream& operator<<(ostream& out, const VectorADT& pt)
{//start
	double* temp;
	for (int i = 0; i < pt.length(); i++)
	{
		if (i != (pt.length() - 1))
		{
			out << pt.array[i] << ", ";
		}
		else
		{
			out << pt.array[i];
		}
		
	}
	return out;
}//end


