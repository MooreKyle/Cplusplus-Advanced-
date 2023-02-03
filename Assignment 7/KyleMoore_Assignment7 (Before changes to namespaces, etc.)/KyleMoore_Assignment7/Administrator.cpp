







//Implementation file Administrator.cpp: This is the IMPLEMENTATION for the class Administrator.
     //Contains the Actual (ADT) Function Definitions. This Implementation File is for Hiding all Tedious Details.
     //This Implementation File Requires and Uses an include Directive (Referenced Below) to Use the Interface File.



//Preprocessor Directives
#include <iostream>             //Library for Input & Output Functions
#include <string>               //Library for Handling Stream of Characters

#include "administrator.h"      //Allows Compiler to Link the Interface/Header File "Administrator.h" with this Implementation File.
#include "salariedemployee.h"  

using std::string;
using std::cout;
using std::endl;
using std::cin;
namespace SavitchEmployees
{
    Administrator::Administrator()
        : SalariedEmployee(), adminTitle("No title yet"),
        areaOfResponsibility("No responsibility yet"),
        supervisorName("No supervisor yet")
    {
        //deliberately empty
    }

    Administrator::Administrator(const string& theName, const string& theSsn,
        double theAnnualSalary)
        : SalariedEmployee(theName, theSsn, theAnnualSalary),
        adminTitle("No title yet"), areaOfResponsibility("No responsibility yet"),
        supervisorName("No supervisor yet")
    {
        //deliberately empty
    }

    void Administrator::setSupervisor(const string& newSupervisorName)
    {
        supervisorName = newSupervisorName;
    }

    void Administrator::readData()
    {
        cout << "Enter the details of the administrator " << getName() << endl;
        cout << " Enter the administrator's title: ";
        getline(cin, adminTitle);
        cout << " Enter the company area of responsibility: ";
        getline(cin, areaOfResponsibility);
        cout << " Enter the name of this administrator's immediate supervisor: ";
        getline(cin, supervisorName);
    }

    void Administrator::print()
    {
        cout << "\nDetails of the administrator..." << endl;
        cout << "Administrator's name: " << getName() << endl;
        cout << "Administrator's title: " << adminTitle << endl;
        cout << "Area of responsibility: " << areaOfResponsibility << endl;
        cout << "Immediate supervisor's name: " << supervisorName << endl;
    }

    void Administrator::printCheck()
    {
        cout << "\nPay check..." << endl;
        setNetPay(salary);
        cout << "\n_______________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of $" << getNetPay();
        cout << "\n_______________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << getSsn() << endl;
        cout << "Salaried Employee (Administrator). Regular Pay: $" << salary;
        cout << "\n_______________________________________________\n";
    }
}