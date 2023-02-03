







//Header file SalariedEmployee.h: This is the HEADER/INTERFACE for the class Rationals.
     //All Public and Private Members of the class are Contained in this File (They are not Split Across Files)



//Preprocessor Headers - Ensures that Only One Definition of the Class is Defined & Allowed.
//Safety Feature/Error Handler - Sets Flag to False for #ifndef SALARIEDEMPLOYEE_H if class was Previously Defined. If False, Skips Entire Class Definition in Header File (Does Nothing).
#ifndef SALARIEDEMPLOYEE_H     //Generates a Constant Macro (Serves as a Label with no Values) - For Consistency, Name Matches Header File.
#define SALARIEDEMPLOYEE_H     //Start of SALARIEDEMPLOYEE_H

#include <string>      //Library for Handling Stream of Characters

#include "Employee.h"

using namespace std;

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
	private:
		double salary;     //weekly
	};
}     //KyleMoore

#endif  //End of SALARIEDEMPLOYEE_H