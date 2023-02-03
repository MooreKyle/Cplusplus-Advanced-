/*Kyle Moore
  Assignment 6
  Last Edited: November 27, 2022
  Assignment Purpose: This Program will Expand on the Rational Numbers Class. The File will be Split up into 3 Files: Header, Implementation, and Application Files.
  It will Utilize namespaces (A Personalized and Defined namespace) to Allow Parts of the Program to be Accessible to Anyone, 
  and use Preprocessor Headers to Prevent Redefining a class More Than Once. It will also Use Directives and Declarations Relating to the Aforementioned.
  The using Directive for the namespace Grouping Allows Testing of the Rationals class.*/

  //Header file Rationals.h: This is the HEADER/INTERFACE for the class Rationals.
       //All Public and Private Members of the class are Contained in this File (They are not Split Across Files)



//Preprocessor Headers - Ensures that Only One Definition of the Class is Defined & Allowed.
//Safety Feature/Error Handler - Sets Flag to False for #ifndef RATIONAL_H if class was Previously Defined. If False, Skips Entire Class Definition in Header File (Does Nothing).
#ifndef RATIONALS_H     //Generates a Constant Macro (Serves as a Label with no Values) - For Consistency, Name Matches Header File.
#define RATIONALS_H     //Start of RATIONALS_H

//Preprocessor Directives
#include <iostream>

using namespace std;     //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'





//Defined/Personalized namespace: KyleMoore - Allows Users to Import all Classes and Parts of Individual Classes from Another User's Program
namespace KyleMoore
{
    //class: Rationals
    class Rationals {

    public:
        //Constructors
        Rationals(int numerator, int denominator)
        {
            this->numerator = numerator;
            this->denominator = denominator;
        }
        Rationals(int numerator)
        {
            this->numerator = numerator;
            this->denominator = 1;
        }
        Rationals()     //Default Constructor (Without Parameters)
        {
            this->denominator = 1;
        }

        //Operator Overloads
        friend Rationals operator + (const Rationals& num1, const Rationals& num2);
        friend Rationals operator - (const Rationals& num1, const Rationals& num2);
        friend Rationals operator * (const Rationals& num1, const Rationals& num2);
        friend Rationals operator / (const Rationals& num1, const Rationals& num2);
        friend bool operator < (const Rationals& num1, const Rationals& num2);
        friend bool operator > (const Rationals& num1, const Rationals& num2);
        friend bool operator <= (const Rationals& num1, const Rationals& num2);
        friend bool operator >= (const Rationals& num1, const Rationals& num2);
        friend bool operator == (const Rationals& num1, const Rationals& num2);
        friend Rationals operator - (const Rationals& num1);
        friend istream& operator >> (istream& input, Rationals& num1);
        friend ostream& operator << (ostream& output, const Rationals& num1);

    private:
        int numerator;
        int denominator;
    };
}

#endif //End of RATIONALS_H