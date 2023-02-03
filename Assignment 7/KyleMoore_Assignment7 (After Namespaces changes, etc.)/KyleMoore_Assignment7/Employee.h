







//Header file Employee.h: This is the HEADER/INTERFACE for the class Employee.
     //All Public and Private Members of the class are Contained in this File (They are not Split Across Files)



//Preprocessor Headers - Ensures that Only One Definition of the Class is Defined & Allowed.
//Safety Feature/Error Handler - Sets Flag to False for #ifndef EMPLOYEE_H if class was Previously Defined. If False, Skips Entire Class Definition in Header File (Does Nothing).
#ifndef EMPLOYEE_H     //Generates a Constant Macro (Serves as a Label with no Values) - For Consistency, Name Matches Header File.
#define EMPLOYEE_H     //Start of EMPLOYEE_H

#include <string>      //Library for Handling Stream of Characters

using std::string;

namespace KyleMoore
{
    class Employee
    {
    public:
        Employee();
        Employee(const string& theName, const string& theSsn);
        string getName() const;
        string getSsn() const;
        double getNetPay() const;
        void setName(const string& newName);
        void setSsn(const string& newSsn);
        void setNetPay(double newNetPay);
        void printCheck() const;
    private:
        string name;
        string ssn;
        double netPay;
    };
}

#endif  //End of EMPLOYEE_H







//#pragma once           //Prevents header File from being Included More Than Once During Compilation

//This is primarily intended to be used as a base class to derive
//classes for different kinds of employees.