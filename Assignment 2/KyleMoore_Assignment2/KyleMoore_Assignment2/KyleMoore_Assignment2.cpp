/*Kyle Moore
  Assignment 2
  Last Edited: Tuesday, September 20, 2022
  Assignment Purpose: This program will prompt the user for a loan amount and interest rate, and then calculate and display the monthly payments and balance of the loan by month until it is paid off.
                      This program will also display a table showing various statistics of the loan to the user, including the monthly payment amount, principal portion of the loan, interest, total interest, and balance at the end of each month. This program will prompt the user regarding if they want to run the program again.*/

//Preprocessor Directives
#include <iostream>     //Library for Input & Output Functions
#include <iomanip>      //Library for Modifying User Input & Outputs Results with Adjusted Formatting
#include <cstdlib>      //Library for Math Functions
#include <cmath>		//Library for Math Functions
using namespace std;    //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'

//Function Declarations/Prototypes
double monthly_Payments(double P, double r, int n);

//Function: main
int main()
{
	//Declarations
	double loan_amount, interest_rate, monthly_payment, total_pay, total_interest = 0;     //Initialized with Default Values to Help Prevent/Handle Errors
	int payment_time = 0;
	const int INTEREST_RATE_CONVERSION = 1200;     //Constant for Converting Interest Rate from Annual to Monthly, and Percent Value to Decimal (12 * 100)
	char choice;

	//Assignment/Execution Statements
	//Greet User & Introduce Program
	cout << "\n\t==========================================================================================================================";
	cout << "\n\t|                                Hello! Welcome to Kyle Moore's Mortgage Calculator!                                     |";
	cout << "\n\t==========================================================================================================================";
	
	//Do-While Loop - Iterates at Least Once for User. Afterwards, Prompts User for Appopriate Input to Optionally Run Program Again.
	do  {
		//Prompt User to Enter Values for Loan Amount, Interest Rate, and the Number of Payments
		cout << setw(12) << "\n\n\tPlease enter the desired loan amount:           $";
		cin >> loan_amount;
		cout << "\tPlease enter the interest rate (as a percent):  %" << setw(10);
		cin >> interest_rate;
		cout << setw(3) << "\tPlease enter the payment period (in months):     ";
		cin >> payment_time;

		//Calculates & Converts the Interest Rate Given from User Input
		interest_rate /= INTEREST_RATE_CONVERSION;

		//Function Call: monthly_Payments
		monthly_payment = monthly_Payments(loan_amount, interest_rate, payment_time);

		//Always Displays Specified Precision Value Digits After Decimal Point, and Rounds Outputted Value to 2 Decimal Places
		cout << fixed << setprecision(2);
		cout << "\n\t\tThe monthly payment amount is $" << monthly_payment << "\n\n\n";

		//Calculate & Display Total Pay and Total Interest
		total_pay = monthly_payment * payment_time;
		total_interest = total_pay - loan_amount;
		cout << "\t\tThe total amount of money you will pay is $" << total_pay;
		cout << "\n\t\tThe total interest is $" << total_interest;
		cout << "\n\n ________________________________________________________________________________________________________________________________________";     //Horizontal Rule

		cout << "\n\n\t\t\t\t\tHere is a table which displays the statistics for each month:\n";     //Table Introduction/Header

		//Monthly Table - Displays Month #, Monthly Payment, Principal, Interest, Total Interest, Total Paid, and Balance Due to User
		cout << "\n\t==========================================================================================================================";
		cout << "\n\t| Month # |    Payment    |    Principal    |    Interest    |    Total Interest    |    Total Paid    |   Balance Due   |";
		cout << "\n\t==========================================================================================================================";

		double balance = loan_amount;     //setter
		double principal, monthly_interest, total_interest = 0;     //Declarations for Calculations for Table

		//Count-Controlled Loop - Iterates up to the payment time in months (Inclusive). Displays Breakdown of Information by Month.
		for(int i = 1; i <= payment_time; i++)
		{
			//Calculations for Statistics
			monthly_interest = interest_rate * balance;
			principal = monthly_payment - monthly_interest;
			total_interest += monthly_interest;
			total_pay = monthly_payment * i;
			balance -= principal;

			//Create Table - Display Statistics in Table
			cout << "\n\t| " << setw(8) << i;     //Start of Table Row - Begins with Month #
			cout << "| $" << setw(13) << monthly_payment;
			cout << "| $" << setw(15) << principal;
			cout << "| $" << setw(14) << monthly_interest;
			cout << "| $" << setw(20) << total_interest;
			cout << "| $" << setw(16) << total_pay;
			cout << "| $" << setw(14) << balance << " |";     //End of Table Row - Ends with Balance
		}
		cout << "\n\t|________________________________________________________________________________________________________________________|";     //Bottom/End of Table

		//Prompt User for Input to Optionally Run the Program Again.
		cout << "\n\n\tDo you want to run this program again? Please enter 'Y' for Yes or 'N' for No: ";
		cin >> choice;
		cout << "\n ________________________________________________________________________________________________________________________________________";     //Horizontal Rule

	  //Boolean Condition for Do-While Loop - Program Continues if User Enters Appropriate Response.
	} while (choice == 'Y' || choice == 'y');

	//Displays and Signals End of Program Notice to User
	cout << "\n\n\n\nThis program has successfully ended. Thank you for using it hooman! Goodbye! \n\n\n\a";

	//return - Terminates the Program Successfully
	return 0;
}





double monthly_Payments(double P, double r, int n)
//monthly_Payments - Calculates the Monthly Payment Amount Using the Amortization Equation. Then, Returns the Result to main.
{
	cout << "\n\n";
	return (P * (r * pow(1 + r, n)) / ((pow(1 + r, n)) - 1));
}





//Unused Content

//Continuously Checks if a Loan is Still Owed
	/*while (loan_amount > 0)
	{
		//Calculates the Remaining Loan Until Loan is no Longer Owed
		loan_amount = loan_amount - (monthly_payment - (loan_amount * interest_rate));
	}*/

	/*if (choice != 'Y' && choice != 'y' || choice != 'N' && choice != 'n')
	{
		while (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n')
		{
			cout << "Invalid Input! Bad Hooman! Please check your input and try again: ";
			cin >> choice;
		}
	}*/