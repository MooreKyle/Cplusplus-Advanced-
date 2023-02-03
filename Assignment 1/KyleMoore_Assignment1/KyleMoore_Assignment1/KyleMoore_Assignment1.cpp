/*Kyle Moore
  Assignment 1
  Last Edited: Tuesday, September 6, 2022
  Assignment Purpose: This program will act as a coin dispenser machine. It prompts the user to enter a dollar amount of coin change desired, and then gives you the value in coins with the least number of coins required. It will display the original dollar amount, coin type, and their respective quantities
					  This program will also perform the inverse: It will accept coins to determine and display the monetary value of the coins in dollars and cents.*/

//Preprocessor Directives
#include <iostream>     //Library for Input & Output Functions
#include <iomanip>      //Library for Modifying User Input & Outputs Results with Adjusted Formatting
using namespace std;    //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'

//Function: main
int main() {
	//Declarations
	double dollarValue = 0;     //Initialized with Default Values to Help Prevent/Handle Errors
	int numQuarters, numDimes, numNickels, numPennies, remainder = 0;

	//Assignment/Execution Statements
	//======================================== 1. Dollar Amount to Coin Change Converter ========================================
	//Prompt user for the amount of money desired in coins.
	cout << "\nPlease enter the amount of money desired in coins (in $X.XX format).\n $";
	cin >> dollarValue;

	//Input Validation: Error Handler - Program Terminates and Informs User if Input is Invalid.
	if (dollarValue <= 0) {
		cout << "\n\n\nAn error has occurred, causing the program to end. Please verify your input was correct and try again. Any input that is <= 0 or bad data is blasphemy!\n\n\n";
		return -1;
	}

	int changeInCoins = dollarValue * 100;     //Converts Money Desired into Coins/Cents. Also, Helps w/ Double to Int Variable Conversion

	//Calculates & Displays both the Quantity of each Coin, and the New remainder Value. Also, Sets New Value to changeInCoins after each Coin Calculation.
	cout << "\nThe equivalent value you will receive in various coins is displayed below: \n";

	numQuarters = changeInCoins / 25;
	remainder = changeInCoins % 25;
	cout << "     You receive " << numQuarters << " quarter(s) with a new remainder of " << remainder << " cents\n";
	changeInCoins = remainder;     //Setter
	numDimes = changeInCoins / 10;
	remainder = changeInCoins % 10;
	cout << "     You receive " << numDimes << " dime(s) with a new remainder of " << remainder << " cents\n";
	changeInCoins = remainder;
	numNickels = changeInCoins / 5;
	remainder = changeInCoins % 5;
	cout << "     You receive " << numNickels << " nickel(s) with a new remainder of " << remainder << " cents\n";
	changeInCoins = remainder;
	numPennies = changeInCoins / 1;
	remainder = changeInCoins % 1;
	cout << "     You receive " << numPennies << " penny/pennies with a final remainder of " << remainder << " cents\n";
	changeInCoins = remainder;

	//Input Validation: Error Handler - Program Terminates and Informs User if Input is Invalid.
	if (numQuarters < 0 || numDimes < 0 || numNickels < 0 || numPennies < 0 || remainder < 0 || changeInCoins < 0) {
		cout << "\n\n\nAn error has occurred, causing the program to end. Please verify your input was correct and try again. Any input that is < 0 or bad data is blasphemy!\n\n\n";
		return -2;
	}

	//Input/Output Manipulators
	cout.setf(ios::fixed);        //Always Displays Specified Precision Value Digits After Decimal Point
	cout.precision(2);              //Rounds Outputted Value to 2 Decimal Places

	//Resets and Displays the Cents Value of the User's Original Money Value Entered
	changeInCoins = dollarValue * 100;
	cout << "\nThe value you entered was $" << dollarValue << ". This is " << changeInCoins << " in coins/cents.\n\n\n";
	cout << "__________________________________________________________________________\n\n\n";





	//======================================== 2.Coins/Cents to Dollar Value Converter ========================================
	//Prompt User to Enter the Quantity of each Type of Coin in both the Respective Order and Method as Mentioned
	cout << "Please enter the quantity of quarters, dimes, nickels, and pennies you have in this order, with each input separated by the 'enter' key: \n";
	cin >> numQuarters >> numDimes >> numNickels >> numPennies;

	//Input Validation: Error Handler - Program Terminates and Informs User if Input is Invalid.
	if (numQuarters < 0 || numDimes < 0 || numNickels < 0 || numPennies < 0) {
		cout << "\n\n\nAn error has occurred, causing the program to end. Please verify your input was correct and try again. Any input that is < 0 or bad data is blasphemy!\n\n";
		return -3;
	}

	//Calculates the Sum of the Coins After Their Products are Determined and Stores into a Variable. Also, Displays Total changeInCoins to User.
	changeInCoins = (numQuarters * 25) + (numDimes * 10) + (numNickels * 5) + (numPennies * 1);
	cout << "\nThe total change in coins that you have is " << changeInCoins << " cent(s).\n";
	dollarValue = changeInCoins / 100;     //Reconverts Money Desired into Dollars and Cents. Also, Helps with Int to Double Variable Conversion.
	remainder = changeInCoins % 100;       //Determines Remaining Cents and Stores into Variable.
	changeInCoins = remainder;             //Setter - Reuses changeInCoins to Display the Monetary Value in 2 Different Ways to User.
	cout.precision(0);                //Resets Precision to Null - Helps Ensure Value is Displayed Appropriately Via 2nd Method
	cout << "This is equivalent to $" << dollarValue << " dollar(s) and " << changeInCoins << " cent(s), or $" << dollarValue << "." << changeInCoins;

	//Displays and Signals End of Program Notice to User
	cout << "\n\n\n\nThis program has successfully ended. Thank you for using it! Goodbye! \n\n\n\a";

	//return - Terminates the Program Successfully
	return 0;
}





//**********Unused Content**********

//cin >> numDimes;
//cin >> numNickels;
//cin >> numPennies;

//int totalCoins;

//cout.setf(ios::showpoint);      //Always Displays Decimal Point in Outputted Results

//cout << "\n Quarters: \n Dimes:   \n\n Nickels:    \n\n\n\n\n Pennies: \n\n";

//Input Validation: Error Handler - Program Terminates and Informs User if Input is Invalid.
	/*if (remainder != 0) {
		cout << "\nAn error has occurred, causing the program to end. Please verify your input was correct and try again.\n\n\n";
		//return 0;
	}*/

	/*Input Validation : Error Handler - Program Terminates and Informs User if Input is Invalid.
		if (numQuarters > 0 && numDimes > 0 && numNickels > 0 && numPennies > 0) {
			cout << "\n\n\nValid Input, well done. Let's debug some more. ";
		}
		else {
			cout << "\nOH NO, An error has occurred, causing the program to end. Please verify your input was correct and try again. Any input that is < 0 or bad data is blasphemy!\n\n\n";
			return -2;
		}*/





//*****Notes*****

//Program could potentially use function(s) for Input Validation
//Unsure if Error Code -2 is impossible to get and unused in the program