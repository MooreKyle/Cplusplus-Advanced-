/*Kyle Moore
  Assignment 5
  Last Edited: November 26, 2022
  Assignment Purpose: PLACEHOLDER*/

//Preprocessor Directives
#include <iostream>     //Library for Input & Output Functions
#include <fstream>      //Includes Input (ifstream) and Output (ofstream) File Stream Functions. For Files, Allows Creation, Read & Write Access.
#include <iomanip>      //Library for Modifying User Input & Outputs Results with Adjusted Formatting
#include <cstring>      //Declares a Set of Functions to Work with C Strings (Null Terminated Byte Strings). Improves Performance through Speed, Memory, etc.
#include <cstdlib>      //General Utilities Functions (ie: Math, Pseudo-Random Number Generation, etc.)

using namespace std;     //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'

//class: Rational
class Rational {

public:
    //Constructors
    Rational(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    Rational(int numerator)
    {
        this->numerator = numerator;
        this->denominator = 1;
    }
    Rational()     //Default Constructor (Without Parameters)
    {
        this->denominator = 1;
    }

    //Operator Overloads
    friend Rational operator + (const Rational& num1, const Rational& num2);
    friend Rational operator - (const Rational& num1, const Rational& num2);
    friend Rational operator * (const Rational& num1, const Rational& num2);
    friend Rational operator / (const Rational& num1, const Rational& num2);
    friend bool operator < (const Rational& num1, const Rational& num2);
    friend bool operator > (const Rational& num1, const Rational& num2);
    friend bool operator <= (const Rational& num1, const Rational& num2);
    friend bool operator >= (const Rational& num1, const Rational& num2);
    friend bool operator == (const Rational& num1, const Rational& num2);
    friend Rational operator - (const Rational& num1);
    friend istream& operator >> (istream& input, Rational& num1);
    friend ostream& operator << (ostream& output, const Rational& num1);

private:
    int numerator;
    int denominator;
};





//Function: main
int main()
{
    //Declarations
    int x;

    //Assignment/Execution Statements
    //Greet User & Introduce Program
    cout << "\n\t==========================================================================================================================";
    cout << "\n\t|                          Hello! Welcome to Kyle Moore's Rational Number Class                                          |";
    cout << "\n\t==========================================================================================================================";

    //Object Declarations of Class: rational_number
    Rational obj1, obj2, obj3;

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

    //Compares the Object's Values and Notifies User of their Relationship using Relational Operators
    if(obj1 == obj2)
    {
        cout << "Both rational numbers are equal to each other.\n";
    }
    else if(obj1 > obj2)
    {
        cout << "The first rational number is greater than the second.\n";
    }
    else if(obj1 < obj2)
    {
        cout << "The second rational number is greater than the first.\n";
    }
    else if(obj1 >= obj2)
    {
        cout << "The first rational number is greater than or equal to the second.\n";
    }
    else if(obj1 <= obj2)
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





Rational operator + (const Rational& num1, const Rational& num2)
{
    Rational obj3;
    obj3.numerator = num1.numerator * num2.denominator + num1.denominator * num2.numerator;
    obj3.denominator = num1.denominator * num2.denominator;
    return obj3;
}

Rational operator - (const Rational& num1, const Rational& num2)
{
    Rational obj3;
    obj3.numerator = num1.numerator * num2.denominator - num1.denominator * num2.numerator;
    obj3.denominator = num1.denominator * num2.denominator;
    return obj3;
}

Rational operator * (const Rational& num1, const Rational& num2)
{
    Rational obj3;
    obj3.numerator = num1.numerator * num2.numerator;
    obj3.denominator = num1.denominator * num2.denominator;
    return obj3;
}

Rational operator / (const Rational& num1, const Rational& num2)
{
    Rational obj3;
    obj3.numerator = num1.numerator * num2.denominator;
    obj3.denominator = num1.denominator * num2.numerator;
    return obj3;
}

bool operator < (const Rational& num1, const Rational& num2)
{
    return ((num1.numerator * num2.denominator) < (num1.denominator * num2.numerator));
}

bool operator > (const Rational& num1, const Rational& num2)
{
    return ((num1.numerator * num2.denominator) > (num1.denominator * num2.numerator));
}

bool operator <= (const Rational& num1, const Rational& num2)
{
    return ((num1.numerator * num2.denominator) <= (num1.denominator * num2.numerator));
}

bool operator >= (const Rational& num1, const Rational& num2)
{
    return ((num1.numerator * num2.denominator) >= (num1.denominator * num2.numerator));
}

bool operator == (const Rational& num1, const Rational& num2)
{
    return ((num1.numerator * num2.denominator) == (num1.denominator * num2.numerator));
}

Rational operator - (const Rational& num1)
{
    Rational obj3;
    obj3.numerator = -num1.numerator;
    obj3.denominator = num1.denominator;
    return obj3;
}

istream& operator >> (istream& input, Rational& num1)
{
    input >> num1.numerator >> num1.denominator;
    //Input Validation/Error Handler - Terminates Program if Value of denominator is Zero
    if(num1.denominator == 0)
    {
        cout << "ERROR: Denominator cannot be zero. Bad hooman! Terminating program immediately.\n\n\n";
        exit(1);     //Stops Program Execution & Returns its Argument to the Operating System (OS).
    }
    return input;
}

ostream& operator << (ostream& output, const Rational& num1)
{
    output << num1.numerator << "/" << num1.denominator << "\n";
    return output;
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