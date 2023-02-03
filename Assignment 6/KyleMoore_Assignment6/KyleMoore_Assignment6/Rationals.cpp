/*Kyle Moore
  Assignment 6
  Last Edited: November 27, 2022
  Assignment Purpose: This Program will Expand on the Rational Numbers Class. The File will be Split up into 3 Files: Header, Implementation, and Application Files.
  It will Utilize namespaces (A Personalized and Defined namespace) to Allow Parts of the Program to be Accessible to Anyone, 
  and use Preprocessor Headers to Prevent Redefining a class More Than Once. It will also Use Directives and Declarations Relating to the Aforementioned.
  The using Directive for the namespace Grouping Allows Testing of the Rationals class.*/

  //Implementation file Rationals.cpp: This is the IMPLEMENTATION for the class Rationals.
       //Contains the Actual (ADT) Function Definitions. This Implementation File is for Hiding all Tedious Details.
       //This Implementation File Requires and Uses an include Directive (Referenced Below) to Use the Interface File.



//Preprocessor Directives
#include <iostream>     //Library for Input & Output Functions
#include <fstream>      //Includes Input (ifstream) and Output (ofstream) File Stream Functions. For Files, Allows Creation, Read & Write Access.
#include <iomanip>      //Library for Modifying User Input & Outputs Results with Adjusted Formatting
#include <cstring>      //Declares a Set of Functions to Work with C Strings (Null Terminated Byte Strings). Improves Performance through Speed, Memory, etc.
#include <cstdlib>      //General Utilities Functions (ie: Math, Pseudo-Random Number Generation, etc.)

#include "Rationals.h"  //Allows Compiler to Link the Interface/Header File "Rationals.h" with this Implementation File.





//Personalized namespace Grouping: KyleMoore - Allows User Accessibility of Most Program's Assets Within this Grouping.
namespace KyleMoore
{
    Rationals operator + (const Rationals& num1, const Rationals& num2)
    {
        Rationals obj3;
        obj3.numerator = num1.numerator * num2.denominator + num1.denominator * num2.numerator;
        obj3.denominator = num1.denominator * num2.denominator;
        return obj3;
    }

    Rationals operator - (const Rationals& num1, const Rationals& num2)
    {
        Rationals obj3;
        obj3.numerator = num1.numerator * num2.denominator - num1.denominator * num2.numerator;
        obj3.denominator = num1.denominator * num2.denominator;
        return obj3;
    }

    Rationals operator * (const Rationals& num1, const Rationals& num2)
    {
        Rationals obj3;
        obj3.numerator = num1.numerator * num2.numerator;
        obj3.denominator = num1.denominator * num2.denominator;
        return obj3;
    }

    Rationals operator / (const Rationals& num1, const Rationals& num2)
    {
        Rationals obj3;
        obj3.numerator = num1.numerator * num2.denominator;
        obj3.denominator = num1.denominator * num2.numerator;
        return obj3;
    }

    bool operator < (const Rationals& num1, const Rationals& num2)
    {
        return ((num1.numerator * num2.denominator) < (num1.denominator * num2.numerator));
    }

    bool operator > (const Rationals& num1, const Rationals& num2)
    {
        return ((num1.numerator * num2.denominator) > (num1.denominator * num2.numerator));
    }

    bool operator <= (const Rationals& num1, const Rationals& num2)
    {
        return ((num1.numerator * num2.denominator) <= (num1.denominator * num2.numerator));
    }

    bool operator >= (const Rationals& num1, const Rationals& num2)
    {
        return ((num1.numerator * num2.denominator) >= (num1.denominator * num2.numerator));
    }

    bool operator == (const Rationals& num1, const Rationals& num2)
    {
        return ((num1.numerator * num2.denominator) == (num1.denominator * num2.numerator));
    }

    Rationals operator - (const Rationals& num1)
    {
        Rationals obj3;
        obj3.numerator = -num1.numerator;
        obj3.denominator = num1.denominator;
        return obj3;
    }

    istream& operator >> (istream& input, Rationals& num1)
    {
        input >> num1.numerator >> num1.denominator;
        //Input Validation/Error Handler - Terminates Program if Value of denominator is Zero
        if (num1.denominator == 0)
        {
            cout << "ERROR: Denominator cannot be zero. Bad hooman! Terminating program immediately.\n\n\n";
            exit(1);     //Stops Program Execution & Returns its Argument to the Operating System (OS).
        }
        return input;
    }

    ostream& operator << (ostream& output, const Rationals& num1)
    {
        output << num1.numerator << "/" << num1.denominator << "\n";
        return output;
    }
}