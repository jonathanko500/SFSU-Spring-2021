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
void VectorADT::push_pack(double val)
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

