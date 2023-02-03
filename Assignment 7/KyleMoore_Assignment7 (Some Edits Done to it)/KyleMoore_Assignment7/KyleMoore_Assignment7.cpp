/*Kyle Moore
  Assignment 7
  Last Edited: December 7, 2022
  Assignment Purpose: *****PLACEHOLDER******/

  //Application file KyleMoore_Assignment7.cpp: This is the APPLICATION (DRIVER/TESTER) for the class *PLACEHOLDER*
       //Contains the main Program/Application to Execute



//Preprocessor Directives
#include <iostream>             //Library for Input & Output Functions
#include <string>               //Library for Handling Stream of Characters

#include "Administrator.h"      //Allows Us to Test the class "Administrator.h". Compiler Checks Current Directory for Header File.

using namespace std;            //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'





//Function: main
int main()
{
    //using Directive: namespace KyleMoore
    using namespace KyleMoore;
    {
        //Assignment/Execution Statements
        //Greet User & Introduce Program
        cout << "\n\t==========================================================================================================================";
        cout << "\n\t|                  Hello! Welcome to Kyle Moore's SalariedEmployee, Employee, and Administrator Classes                  |";
        cout << "\n\t==========================================================================================================================";

        Administrator admin("Mr. Joe Bowman", "867-53-0900", 5000.00);

        admin.input_data();

        admin.print();

        admin.printCheck();

        //Displays and Signals End of Program Notice to User
        cout << "\n\n\n\n\nThis program has successfully ended. Thank you for using it hooman! Goodbye! \n\n\n\a";

        //return - Terminates the Program Successfully
        return 0;
    }
}





//Unused Content

//using KyleMoore::Administrator;