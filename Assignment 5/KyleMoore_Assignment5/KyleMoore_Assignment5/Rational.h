/*Kyle Moore
  Assignment 6
  Last Edited: November 27, 2022
  Assignment Purpose: PLACEHOLDER*/

//Header file dtime.h: This is the INTERFACE for the class Rational.
//Values of this type are times of day.
//The values are input and output in 24-hour notation, as in 9:30 for 9:30 AM and 14:45 for 2:45 PM.


//Preprocessor Header - Ensures that Only One Definition of the Class is Allowed
#ifndef RATIONAL_H
#define RATIONAL_H

//Preprocessor Directives
#include <iostream>

using namespace std;     //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'

//class: Rational
class DigitalTime
{
public:
	friend bool operator ==(const DigitalTime& time1, const DigitalTime& time2);
	//Returns true if time1 and time2 represent the same time;
	//otherwise, returns false.
	DigitalTime(int the_hour, int the_minute);
	//Precondition: 0 <= the_hour <= 23 and 0 <= the_minute <= 59.
	//Initializes the time value to the_hour and the_minute.
	DigitalTime();
	//Initializes the time value to 0:00 (which is midnight).
	void advance(int minutes_added);
	//Precondition: The object has a time value.
	//Postcondition: The time has been changed to minutes_added minutes later.
	void advance(int hours_added, int minutes_added);
	//Precondition: The object has a time value.
	//Postcondition: The time value has been advanced
	//hours_added hours plus minutes_added minutes.
	friend istream& operator >>(istream& ins, DigitalTime& the_object);
	//Overloads the >> operator for input values of type DigitalTime.
	//Precondition: If ins is a file input stream, then ins has already been
	//connected to a file.
	friend ostream& operator <<(ostream& outs, const DigitalTime& the_object);
	//Overloads the << operator for output values of type DigitalTime.
	//Precondition: If outs is a file output stream, then outs has already been
	//connected to a file.

private:
	int hour;
	int minute;

};

#endif // RATIONAL_H

