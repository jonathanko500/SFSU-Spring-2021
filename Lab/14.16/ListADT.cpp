#include "ListADT.h"

using namespace std;

//node class
Node::Node()
{//default constructor
	value = 0;
	next = nullptr;
}

Node::Node(int val)
{//constructor with val
	value = val;
	next = nullptr;
}

//listADT class

//default constuctor
ListADT::ListADT():size(0),head(nullptr)
{

}

//big 3

//copy constructor
ListADT::ListADT(const ListADT& copy)
{//start
	if (copy.head == nullptr)
	{//copy a null node
		head = nullptr;
		size = 0;
	}
	else
	{//copy a non null node
		head = new Node();
		head->value = copy.head->value;
		Node* temp = head;
		Node* copyTemp = copy.head->next;
		while (copyTemp != nullptr)
		{
			temp->next = new Node();
			temp = temp->next;
			temp->value = copyTemp->value;
			copyTemp = copyTemp->next;
		}
		temp->next = nullptr;
		size = copy.size;
	}
}//end

//destructor
ListADT::~ListADT()
{//start
	Node* pt = head;
	while (pt != nullptr)
	{//look through node
		head->next;
		delete pt;
		pt = head;
	}
	head = nullptr;
	size = 0;
}//end

//opertor =
void ListADT :: operator= (const ListADT& next)
{//start

}//end


//other functions

//length
int ListADT::length() const
{
	return size;
}

//push back
void ListADT::push_back(int val)
{//start
	Node* start = new Node(val);
	if (head == nullptr)
	{//check to see if list has stuff
		head = start;
	}
	else
	{//put val @ back of list
		Node* pt = head;
		while (pt->next != NULL)
		{//move to end of list
			pt = pt->next;
		}
		pt->next = start;
	}
	size++;
}//end

//push forward
void ListADT::push_front(int val)
{//start
	Node* begin = new Node(val);
	begin->next = head;
	head = begin;
	size++;
}//end

//pop back
void ListADT::pop_back()
{//start
	Node* start = head;
	Node* end;

	if (head == nullptr)
	{//check to see if list is empty
		return;
	}
	else
	{//start to delete last val
		while (start->next != nullptr)
		{//look through list
			end = start;
			start = start->next;
		}
		if (end != nullptr && start != nullptr)
		{//delete last val
			end->next = nullptr;
			delete start;
			size--;
		}
	}//end delete val 
}//end

//pop front
void ListADT::pop_front()
{//start
	Node* start = head;
	if (head == nullptr)
	{//check to see if list empty
		return;
	}
	else
	{//delete first val
		head = head->next;
		delete start;
		size--;
	}
}//end

//operator[]
int ListADT :: operator[](const int& pt)
{//start
	Node* start = head;
	int count = 0;
	if (pt > size)
	{//return invalid val if element is beyond list size
		return -1;
	}
	else
	{//start to return specific val
		while (count != 0 && start != nullptr)
		{//look through array
			start = start->next;
			count++;
		}
		if (start != nullptr)
		{
			return start->value;
		}
		else
		{
			return -1;
		}
	}//end return specific val
}//end

//operator <<
ostream& operator<<(std::ostream& out, const ListADT& pt)
{//start
	Node* start = pt.head;
	while (start != nullptr)
	{//look through list
		out << start->value;
		start = start->next;
		if (start != nullptr)
		{
			out << ", ";
		}
	}
	return out;
}//end