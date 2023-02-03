







//Header file Employee.h: This is the HEADER/INTERFACE for the class Employee.
     //All Public and Private Members of the class are Contained in this File (They are not Split Across Files)



//Preprocessor Headers - Ensures that Only One Definition of the Class is Defined & Allowed.
//Safety Feature/Error Handler - Sets Flag to False for #ifndef ADMINISTRATOR_H if class was Previously Defined. If False, Skips Entire Class Definition in Header File (Does Nothing).
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>      //Library for Handling Stream of Characters

#include "salariedemployee.h"

using std::string;
namespace SavitchEmployees
{
    //derived/child class: Administrator -> Inherited from base/parent class: SalariedEmployee
    class Administrator : public SalariedEmployee
    {
    public:
        Administrator();
        Administrator(const string& theName, const string& theSsn, double theAnnualSalary);
        void setSupervisor(const string& newSupervisorName);
        void readData();
        void print();
        void printCheck();

    protected:
        string adminTitle;
        string areaOfResponsibility;
        string supervisorName;
    };
}
#endif