/*Kyle Moore
  Assignment 7
  Last Edited: December 7, 2022
  Assignment Purpose: This Program Will Use the SalariedEmployee Class from Lecture 20 (Slides 17-19) to Define a class Called Administrator, Which is Derived from the SalariedEmployee class.
  The Derived class will Prompt and Store the User's Input for Various Variables, while also Displaying this Info to the User.
  This Program will Help to Test the Hierarchy of Inheritance, and Showcase Inheritance of classes.*/

//Implementation file Employee.cpp: This is the IMPLEMENTATION for the class Employee.
       //Contains the Actual (ADT) Function Definitions. This Implementation File is for Hiding all Tedious Details.
       //This Implementation File Requires and Uses an include Directive (Referenced Below) to Use the Interface File.



//Preprocessor Directives
#include <iostream>             //Library for Input & Output Functions
#include <string>               //Library for Handling Stream of Characters
#include <cstdlib>

#include "Employee.h"           //Allows Compiler to Link the Interface/Header File "Employee.h" with this Implementation File.

using std::string;
using std::cout;





//namespace KyleMoore
namespace KyleMoore
{
    Employee::Employee() : name("No current name"), ssn("Missingno."), netPay(0)
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
    void Employee::print_check() const
    {
        cout << "\nERROR: printCheck FUNCTION CALLED FOR AN \n"
             << "UNDIFFERENTIATED EMPLOYEE.Aborting the program.\n"
             << "Check with the author of the program about this bug.\n";
        exit(1);
    }
}     //KyleMoore