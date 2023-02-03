//This is the file salariedemployee.cpp.
//This is the implementation for the class SalariedEmployee.
//The interface for the class SalariedEmployee is in
//the header file salariedemployee.h.




//Implementation file SalariedEmployee.cpp: This is the IMPLEMENTATION for the class SalariedEmployee.
	   //Contains the Actual (ADT) Function Definitions. This Implementation File is for Hiding all Tedious Details.
	   //This Implementation File Requires and Uses an include Directive (Referenced Below) to Use the Interface File.



//Preprocessor Directives
#include <iostream>            //Library for Input & Output Functions
#include <string>              //Library for Handling Stream of Characters

#include "SalariedEmployee.h"  //Allows Compiler to Link the Interface/Header File "SalariedEmployee.h" with this Implementation File.

using namespace std;           //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'

//using Directive: namespace employeessavitch
namespace KyleMoore
{
	SalariedEmployee::SalariedEmployee() : Employee(), salary(0)
	{
		//deliberately empty
	}

	SalariedEmployee::SalariedEmployee(string the_name, string the_number, double the_weekly_salary)
		: Employee(the_name, the_number), salary(the_weekly_salary)
	{
		//deliberately empty
	}

	double SalariedEmployee::get_salary() const
	{
		return salary;
	}

	void SalariedEmployee::set_salary(double new_salary)
	{
		salary = new_salary;
	}

	void SalariedEmployee::print_check()
	{
		set_net_pay(salary);
		cout << "\n________________________________________________\n";
		cout << "Pay to the order of " << get_name() << endl;
		cout << "The sum of " << get_net_pay() << " Dollars\n";
		cout << "________________________________________________\n"
		cout << "Check Stub NOT NEGOTIABLE \n";
		cout << "Employee Number: " << get_ssn() << endl;
		cout << "Salaried Employee. Regular Pay: " << salary << endl;
		cout << "________________________________________________\n;"
	}
}     //employeessavitch