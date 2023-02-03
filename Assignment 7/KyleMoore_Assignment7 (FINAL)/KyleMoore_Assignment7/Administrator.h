/*Kyle Moore
  Assignment 7
  Last Edited: December 7, 2022
  Assignment Purpose: This Program Will Use the SalariedEmployee Class from Lecture 20 (Slides 17-19) to Define a class Called Administrator, Which is Derived from the SalariedEmployee class.
  The Derived class will Prompt and Store the User's Input for Various Variables, while also Displaying this Info to the User.
  This Program will Help to Test the Hierarchy of Inheritance, and Showcase Inheritance of classes.*/

//Header file Administrator.h: This is the HEADER/INTERFACE for the class Administrator.
     //All Public and Private Members of the class are Contained in this File (They are not Split Across Files)



//Preprocessor Headers - Ensures that Only One Definition of the Class is Defined & Allowed.
//Safety Feature/Error Handler - Sets Flag to False for #ifndef ADMINISTRATOR_H if class was Previously Defined. If False, Skips Entire Class Definition in Header File (Does Nothing).
#ifndef ADMINISTRATOR_H        //Generates a Constant Macro (Serves as a Label with no Values) - For Consistency, Name Matches Header File.
#define ADMINISTRATOR_H        //Start of ADMINISTRATOR_H

#include <string>      //Library for Handling Stream of Characters

#include "SalariedEmployee.h"

using std::string;





//namespace KyleMoore
namespace KyleMoore
{
    //derived/child class: Administrator -> Inherited from base/parent class: SalariedEmployee
    class Administrator : public SalariedEmployee
    {
    public:
        Administrator();
        Administrator(const string& theName, const string& theSsn, double theAnnualSalary);
        void set_supervisor(const string& new_supervisor_name);
        void input_data();
        void print();
        void print_check();

    protected:
        string admin_title;
        string admin_division;
        string supervisor_name;
    };
}

#endif  //End of ADMINISTRATOR_H