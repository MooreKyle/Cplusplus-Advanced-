/*Kyle Moore
  Assignment 7
  Last Edited: December 7, 2022
  Assignment Purpose: This Program Will Use the SalariedEmployee Class from Lecture 20 (Slides 17-19) to Define a class Called Administrator, Which is Derived from the SalariedEmployee class.
  The Derived class will Prompt and Store the User's Input for Various Variables, while also Displaying this Info to the User.
  This Program will Help to Test the Hierarchy of Inheritance, and Showcase Inheritance of classes.*/

//Implementation file Administrator.cpp: This is the IMPLEMENTATION for the class Administrator.
       //Contains the Actual (ADT) Function Definitions. This Implementation File is for Hiding all Tedious Details.
       //This Implementation File Requires and Uses an include Directive (Referenced Below) to Use the Interface File.



//Preprocessor Directives
#include <iostream>            //Library for Input & Output Functions
#include <string>              //Library for Handling Stream of Characters

#include "Administrator.h"     //Allows Compiler to Link the Interface/Header File "Administrator.h" with this Implementation File.
#include "SalariedEmployee.h"  //Allows Compiler to Link the Interface/Header File "SalariedEmployee.h" with this Implementation File.





//namespace KyleMoore
namespace KyleMoore
{
    Administrator::Administrator()
        : SalariedEmployee(), admin_title("No current title"),
        admin_division("No current division"),
        supervisor_name("No current supervisor")
    {
        //deliberately empty
    }

    Administrator::Administrator(const string& theName, const string& theSsn,
        double theAnnualSalary)
        : SalariedEmployee(theName, theSsn, theAnnualSalary),
        admin_title("No current title"), admin_division("No current division"),
        supervisor_name("No current supervisor")
    {
        //deliberately empty
    }

    void Administrator::set_supervisor(const string& new_supervisor_name)
    {
        supervisor_name = new_supervisor_name;
    }

    void Administrator::input_data()
    {
        cout << "\n\n\n\nPlease Enter the details of the administrator: " << getName() << endl;
        cout << "\nEnter the administrator's title: ";
        getline(cin, admin_title);
        cout << "Enter the company division of administration: ";
        getline(cin, admin_division);
        cout << "Enter the administrator's supervisor's name: ";
        getline(cin, supervisor_name);
    }

    void Administrator::print()
    {
        cout << "\n\n\nDetails of the administrator: " << endl;
        cout << "\nAdministrator's name: " << getName() << endl;
        cout << "Administrator's title: " << admin_title << endl;
        cout << "Administrator's division: " << admin_division << endl;
        cout << "Supervisor's name: " << supervisor_name << endl;
    }

    void Administrator::print_check()
    {
        cout << "\n\n\nPay Check: " << endl;
        setNetPay(salary);
        cout << "\n________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of $" << getNetPay() << " Dollars\n";
        cout << "\n______________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << getSsn() << endl;
        cout << "Salaried Employee (Administrator). Regular Pay: $" << salary;
        cout << "\n\n______________________________________________\n";
    }
}     //KyleMoore