/*Kyle Moore
  Assignment 7
  Last Edited: December 7, 2022
  Assignment Purpose: This Program Will Use the SalariedEmployee Class from Lecture 20 (Slides 17-19) to Define a class Called Administrator, Which is Derived from the SalariedEmployee class.
  The Derived class will Prompt and Store the User's Input for Various Variables, while also Displaying this Info to the User.
  This Program will Help to Test the Hierarchy of Inheritance, and Showcase Inheritance of classes.*/

//Header file SalariedEmployee.h: This is the HEADER/INTERFACE for the class Rationals.
     //All Public and Private Members of the class are Contained in this File (They are not Split Across Files)



//Preprocessor Headers - Ensures that Only One Definition of the Class is Defined & Allowed.
//Safety Feature/Error Handler - Sets Flag to False for #ifndef SALARIEDEMPLOYEE_H if class was Previously Defined. If False, Skips Entire Class Definition in Header File (Does Nothing).
#ifndef SALARIEDEMPLOYEE_H     //Generates a Constant Macro (Serves as a Label with no Values) - For Consistency, Name Matches Header File.
#define SALARIEDEMPLOYEE_H     //Start of SALARIEDEMPLOYEE_H

#include <string>      //Library for Handling Stream of Characters

#include "Employee.h"

using namespace std;

using std::string;





//namespace KyleMoore
namespace KyleMoore
{
	//derived/child class: SalariedEmployee -> Inherited from base/parent class: Employee
	class SalariedEmployee : public Employee
	{
	public:
		SalariedEmployee();
		SalariedEmployee(string the_name, string the_ssn, double the_weekly_salary);
		double get_salary() const;
		void set_salary(double new_salary);
		void print_check();
	protected:
		double salary;     //weekly
	};
}     //KyleMoore

#endif  //End of SALARIEDEMPLOYEE_H