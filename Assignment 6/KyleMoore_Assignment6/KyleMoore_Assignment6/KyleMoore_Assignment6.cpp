/*Kyle Moore
  Assignment 6
  Last Edited: November 27, 2022
  Assignment Purpose: This Program will Expand on the Rational Numbers Class. The File will be Split up into 3 Files: Header, Implementation, and Application Files.
  It will Utilize namespaces (A Personalized and Defined namespace) to Allow Parts of the Program to be Accessible to Anyone, 
  and use Preprocessor Headers to Prevent Redefining a class More Than Once. It will also Use Directives and Declarations Relating to the Aforementioned.
  The using Directive for the namespace Grouping Allows Testing of the Rationals class.*/

  //Application file KyleMoore_Assignment6.cpp: This is the APPLICATION (DRIVER/TESTER) for the class Rationals.
       //Contains the main Program/Application to Execute



//Preprocessor Directives
#include <iostream>     //Library for Input & Output Functions

#include "Rationals.h"  //Allows Us to Test the class "Rationals.h". Compiler Checks Current Directory for Header File.

using namespace std;     //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'





//Function: main
int main()
{
    //using Directive: namespace KyleMoore
    using namespace KyleMoore;
    {
        //Declarations
        int x;

        //Assignment/Execution Statements
        //Greet User & Introduce Program
        cout << "\n\t==========================================================================================================================";
        cout << "\n\t|                          Hello! Welcome to Kyle Moore's Rational Number Class                                          |";
        cout << "\n\t==========================================================================================================================";

        //Object Declarations of Class: Rationals
        Rationals obj1, obj2, obj3;

        //Prompt User to Input Values for Numerator & Denominator to Store in Two Objects, and an Integer Value for Variable x.
        cout << "\n\n\n\n\n\nPlease enter values for a numerator and denominator in this order, with both values separated by the 'Enter' key:\n";
        cin >> obj1;
        cout << obj1;
        cout << "\nPlease enter a second set of values for a numerator and denominator in this order, with both values separated by the 'Enter' key:\n";
        cin >> obj2;
        cout << obj2;
        cout << "\nPlease enter an integer value:\n";
        cin >> x;
        cout << "x = " << x << "\n\n\n\n";

        //Compares the Objects' Values and Notifies User of their Relationship using Relational Operators
        if (obj1 == obj2)
        {
            cout << "Both rational numbers are equal to each other.\n";
        }
        else if (obj1 > obj2)
        {
            cout << "The first rational number is greater than the second.\n";
        }
        else if (obj1 < obj2)
        {
            cout << "The second rational number is greater than the first.\n";
        }
        else if (obj1 >= obj2)
        {
            cout << "The first rational number is greater than or equal to the second.\n";
        }
        else if (obj1 <= obj2)
        {
            cout << "The second rational number is greater than or equal to the first.\n";
        }

        //Tests and Performs Mathematical Operations Between Objects and an Integer Variable Value, and Displays Results to the User
        obj3 = obj1 + x;
        cout << "\nobj1 + x = " << obj3;
        obj3 = obj1 - x;
        cout << "\nobj1 - x = " << obj3;
        obj3 = obj1 * x;
        cout << "\nobj1 * x = " << obj3;
        obj3 = obj1 / x;
        cout << "\nobj1 / x = " << obj3;

        //Tests and Performs Mathematical Operations Between Objects Only, and Displays Results to the User
        obj3 = obj1 + obj2;
        cout << "\nobj1 + obj2 = " << obj3;
        obj3 = obj1 - obj2;
        cout << "\nobj1 - obj2 = " << obj3;
        obj3 = obj1 * obj2;
        cout << "\nobj1 * obj2 = " << obj3;
        obj3 = obj1 / obj2;
        cout << "\nobj1 / obj2 = " << obj3;
        obj3 = -obj1;
        cout << "\nThe opposite of obj1 = " << obj3;
        obj3 = -obj2;
        cout << "\nThe inverse of obj2 = " << obj3;

        //Displays and Signals End of Program Notice to User
        cout << "\n\n\n\n\nThis program has successfully ended. Thank you for using it hooman! Goodbye! \n\n\n\a";

        //return - Terminates the Program Successfully
        return 0;
    }
}










//Unused Content

//Member Function Definitions
/*void rational_number::input()
{
    //char div = '/';
    cout << "Please enter values for the numerator and denominator, separated by a '/': ";
    cin >> numerator;
    //cin >> div;
    cin >> denominator;

    if (denominator == 0)
    {
        cout << "Denominator cannot be 0. Terminating program immediately.";
        exit(1);
    }
}



void rational_number::output()
{
    cout << numerator << '/' << denominator;
}*/





//friend istream& operator << ostream & outs, const Money&
//friend ostream& operator << ostream & outs, const Money&
//rational_number(0, int denominator);
//rational_number(0, 1);

//Setter Function: setNumerator (Sets the Value of numerator)
//void setNumerator(int numerator)
//{
    //this->numerator = numerator;
//}

//Getter Function: getNumerator (Retrieves the Value of numerator)
//int getNumerator() const
//{
    //return numerator;
//}

//Setter Function: setDenominator (Sets the Value of denominator)
//void setDenominator(int denominator)
//{
    //denominator != 0 ? this->denominator = denominator : this->denominator = 1;
//}

//Getter Function: getDenominator (Retrieves the Value of denominator)
//int getDenominator() const
//{
    //return denominator;
//}





/*friend rational_number operator +(rational_number& numerator, rational_number& denominator);
  friend rational_number operator -(rational_number& numerator, rational_number& denominator);
  friend rational_number operator *(rational_number& numerator, rational_number& denominator);
  friend rational_number operator /(rational_number& numerator, rational_number& denominator);
  friend rational_number operator <(rational_number& numerator, rational_number& denominator);
  friend rational_number operator >(rational_number& numerator, rational_number& denominator);
  friend rational_number operator <=(rational_number& numerator, rational_number& denominator);
  friend rational_number operator >=(rational_number& numerator, rational_number& denominator);
  friend rational_number operator ==(rational_number& numerator, rational_number& denominator);
*/

//#include <stdexcept>

//namespace KyleMoore
    //{
    //}

//Unused namespaces are unused here, since there are no stand alone functions outside of the class.