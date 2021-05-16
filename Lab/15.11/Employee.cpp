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
