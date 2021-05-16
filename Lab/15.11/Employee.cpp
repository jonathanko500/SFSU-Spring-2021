#include "Employee.h"

using namespace std;


//default
Employee::Employee() :Person(), work_email("work@"), salary(0.0), cnt_sal_changes(10)
{//start
	//0.0->salary, 10->cnt_sal_changes, "work@"->work_email, sal_change_rates: allocate memory to hold 10 doubles, each of which has an initial value of 0.0
	sal_change_rates = new double[cnt_sal_changes];
	for (int i = 0; i < cnt_sal_changes; i++)
	{
		sal_change_rates[i] = 0.0;
	}
}//end

//big 3

//copy
Employee::Employee(const Employee& clone) :Person(clone), work_email(clone.work_email), salary(clone.salary), cnt_sal_changes(clone.cnt_sal_changes)
{//start
	sal_change_rates = new double[cnt_sal_changes];
	for (int i = 0; i < cnt_sal_changes; i++)
	{
		sal_change_rates[i] = clone.sal_change_rates[i];
	}
}//end

//destructor
Employee :: ~Employee()
{//start
	if (sal_change_rates != nullptr)
	{
		delete[] sal_change_rates;
		sal_change_rates = nullptr;
	}
}//end

//opertor =
Employee Employee :: operator=(const Employee& rhs)
{//start
	Person::operator=(rhs);
	
	work_email = rhs.work_email;
	salary = rhs.salary;
	cnt_sal_changes = rhs.cnt_sal_changes;
	delete[] sal_change_rates;
	sal_change_rates = new double[cnt_sal_changes];
	for (int i = 0; i < cnt_sal_changes; i++)
	{
		sal_change_rates[i] = rhs.sal_change_rates[i];
	}
	return *this;
}//end

/*
double getChangeRate(int i) const;//return the i-th rate in the sal_change_rates array if i is valid; otherwise return -1.00

virtual string getEmail() const; //return work_email
virtual void setEmail(string new_email); //new_email-->work_email
virtual string getTypeOfObj() const; //return "Employee"
*/

//other functions

double Employee::getChangeRate(int i) const
{//start
	if (i < 0 || i >= cnt_sal_changes)
	{
		return -1.0;
	}
	return sal_change_rates[i];
}//end

void Employee::setEmail(string new_email)
{//start
	work_email = new_email;
}//end

string Employee::getEmail() const
{//start
	return work_email;
}//end

string Employee::getTypeOfObj() const
{//start
	return "Employee";
}//end