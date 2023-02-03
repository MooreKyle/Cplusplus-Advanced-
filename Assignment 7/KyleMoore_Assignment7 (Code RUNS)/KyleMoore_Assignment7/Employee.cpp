







//Implementation file Employee.cpp: This is the IMPLEMENTATION for the class Employee.
       //Contains the Actual (ADT) Function Definitions. This Implementation File is for Hiding all Tedious Details.
       //This Implementation File Requires and Uses an include Directive (Referenced Below) to Use the Interface File.



//Preprocessor Directives
#include <iostream>             //Library for Input & Output Functions
#include <string>               //Library for Handling Stream of Characters
#include <cstdlib>

#include "Employee.h"

using std::string;
using std::cout;

namespace KyleMoore
{
    Employee::Employee() : name("No name yet"), ssn("No number yet"), netPay(0)
    {
        //deliberately empty
    }
    Employee::Employee(const string& theName, const string& theNumber)
        : name(theName), ssn(theNumber), netPay(0)
    {
        //deliberately empty
    }
    string Employee::getName() const
    {
        return name;
    }
    string Employee::getSsn() const
    {
        return ssn;
    }

    double Employee::getNetPay() const
    {
        return netPay;
    }
    void Employee::setName(const string& newName)
    {
        name = newName;
    }
    void Employee::setSsn(const string& newSsn)
    {
        ssn = newSsn;
    }
    void Employee::setNetPay(double newNetPay)
    {
        netPay = newNetPay;
    }
    void Employee::printCheck() const
    {
        cout << "\nERROR: printCheck FUNCTION CALLED FOR AN \n"
            << "UNDIFFERENTIATED EMPLOYEE.Aborting the program.\n"
            << "Check with the author of the program about this bug.\n";
        exit(1);
    }
}     //KyleMoore