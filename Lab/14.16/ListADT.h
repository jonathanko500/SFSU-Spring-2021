#ifndef LISTADT_H
#define LISTADT_H
#include <iostream>

using namespace std;

class Node
{//start
public:
	Node();
	Node(int val);
	Node* next;
	int value;

};//end

class ListADT
{//start
	ListADT();
	//big 3
	ListADT(const ListADT& copy);
	void operator= (const ListADT& next);
	~ListADT();

	//other functions
	int length() const;//return current size of list
	void push_back(int val);//put val in back of list
	void push_front(int val);//put val in front of list
	void pop_back();//delete last val in list
	void pop_front();//delete first val in list
	int operator[](const int& pt);
	friend ostream& operator<<(ostream& out, const ListADT& pt);
private:
	int size; 
	Node* head;
};//end

#endif