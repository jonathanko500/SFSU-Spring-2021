#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>
#include <new>

using namespace std;

class Person 
{//start class
public:
    Person(); //0->SSN, "na"->name, "personal@"->personalEmail, 10->cntPlaces, allocate space to placesVisited and initializes each place to "unknown"
    virtual ~Person();    
    Person operator=(const Person& rhs);  // **Minor revision**: changes the return mechanism from by-reference to by-value
    //copy constructor
    Person(const Person& clone);


    string getPlace(int i) const; //return the i-th place in the placesVisited array if i is valid; otherwise return "out-of-boundary".

    virtual string getEmail() const; //return personalEmail
    virtual void setEmail(string new_email); //new_email-->personalEmail
    virtual string getTypeOfObj() const; //return "Person"

    virtual void printALL();

private:
    int SSN;
    string name;
    string personalEmail;

    string* placesVisited;
    int cntPlaces; //companion variable of the above pointer
};//end class


#endif /* Person_h */