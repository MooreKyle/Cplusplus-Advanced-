/*Kyle Moore
  Assignment 3
  Last Edited: Friday, September 30, 2022
  Assignment Purpose: This Program is a Random Number Generator (RNG). It will Generate a Total Quantity of 1000 Numbers with a specified Upper and Lower Limit (Inclusively) for these Values.
                      It will also Write these Values to a File, and Display them to the User. Finally, the Program will Calculate and Display the Sum, Average, and Standard Deviation to the User, and Append these Values to the End of File.*/

//Preprocessor Directives
#include <iostream>     //Library for Input & Output Functions
#include <cstdlib>      //General Utilities Functions (ie: Math, Pseudo-Random Number Generation, etc.)
#include <ctime>        //For Seeding Random Number Generator Only Once
#include <cmath>        //Library for Math Functions
#include <fstream>      //Includes Input (ifstream) and Output (ofstream) File Stream Functions. For Files, Allows Creation, Read & Write Access.
#include <iomanip>      //Library for Modifying User Input & Outputs Results with Adjusted Formatting

using namespace std;    //Adds Scope for all Commands/Functions Within the Standard Namespace, Removing the Need for the Prefix 'std::'

//Function: main
int main()
{
    //Declarations
    int N;     //Random Number to Generate
    const int NUM_LIMIT = 1000;      //Total Quantity of Random Numbers Generated
    const int UPPER_LIMIT = 899;     //Highest Possible Value of a Randomly Generated Number
    const int LOWER_LIMIT = 101;     //Lowest Possible Value of a Randomly Generated Number
    int sum = 0;
    ofstream of_stream;     //Stream Variable Declaration

    //Assignment/Execution Statements
    //Greet User & Introduce Program
    cout << "\n\t==========================================================================================================================";
    cout << "\n\t|                          Hello! Welcome to Kyle Moore's Random Number Generator (RNG)!                                 |";
    cout << "\n\t==========================================================================================================================";

    //Initializes/Seeds the Random Number Generator (RNG) (Only Once)
    srand(time(0));

    //Connects Stream to File (Opens File). Uses the open Function of the Stream Object.
    of_stream.open("KyleMoore_Rand.txt");

    //Error Handler - Checks if File was Successfully Opened. Program Terminates if File Opening Fails.
    if(of_stream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);     //Stops Program Execution & Returns its Argument to the Operating System (OS).
    }

    //Headers for RNG - For Display to User & in File
    cout << "\n\n\t\t\t\t\tHere is a list of " << NUM_LIMIT << " Randomly Generated Numbers Between " << LOWER_LIMIT << " and " << UPPER_LIMIT << " (Inclusively):\n\n";
    of_stream << "\n\t\t\t\t\tHere is a list of " << NUM_LIMIT << " Randomly Generated Numbers Between " << LOWER_LIMIT << " and " << UPPER_LIMIT << " (Inclusively):\n\n";

    //Generates 1000 Random Numbers Total (The Number Limit & Inclusive)
    for(int i = 1; i <= NUM_LIMIT; i++)
    {
        //Generates a Random Number in the Range [101-999] (Inclusive) & Stores it in 'N'
        N = rand() % 899 + 101;
        cout << N << "\t";
        of_stream << N << "\t";     //Writes the Values to the File Via File Stream Object
 
        sum += N;     //Accumulator - Adds Every New Value of N that is Generated to Sum
        
        //Handles Multiples of 10 of NUM_LIMIT for Quantity of Random Numbers Generated for Rows - To Display to User & to Write in File Respectively
        if(i % 10 == 0)
        {
            cout << "\n";          //Displays 10 Randomly Generated Numbers Per Row to User
            of_stream << "\n";     //Writes 10 Randomly Generated Numbers Per Row in File
        }
    }

    of_stream.close();
    of_stream.open("KyleMoore_Rand.txt", ios::app);     //Reopen File to Specify Append Mode - Allows Appending (Writing to End of File).

    //Error Handler - Checks if File was Successfully Opened. Program Terminates if File Opening Fails.
    if(of_stream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);     //Stops Program Execution & Returns its Argument to the Operating System (OS).
    }

    //Calculates Average & Standard Deviation
    double average = sum / NUM_LIMIT;     //Calculates the Average
    double std_Dev = sqrt(average);       //Calculates the Standard Deviation

    //Displays Sum, Average, and Standard Deviation to User (Shows Exactly What is Appended to the File as Well)
    cout << "\n\n\nThe Sum of the " << NUM_LIMIT << " Values Generated is " << sum << ".";
    cout << "\nThe Average of the " << NUM_LIMIT << " Values Generated is " << average << ".";
    cout << "\nThe Standard Deviation is " << std_Dev << ".";

    //Appends Sum, Average, and Standard Deviation to End of File Via File Stream Object of the ofstream Class
    of_stream << "\n\n\nSum: " << setw(22) << sum;
    of_stream << "\nAverage: " << setw(18) << average;
    of_stream << "\nStandard Deviation: " << std_Dev;

    //Closes the Opened File
    of_stream.close();

    //Displays and Signals End of Program Notice to User
    cout << "\n\n\n\nThis program has successfully ended. Thank you for using it hooman! Goodbye! \n\n\n\a";

    //return - Terminates the Program Successfully
    return 0;
}





//Unused Content

//N = 0;     //RESET N NEEDED?! SADFGHJFTDRESDFGV

//ifstream inFile;     //Stream Variable Declaration - IS FILENAME PARAMETER REQUIRED AFTER inFile?! - DKSFGHFFDRGDFDGBFDRGB

//string writer = "lol";
//writer.append("\n\nThe Sum of the " << LIMIT << " Values Generated is " << sum);

//Function Declarations/Prototypes





//To-Do/Concerns

//Is Formula for Standard Deviation Correct?!
////Is Closing and Reopening File Necessary to Specify Append Open Mode/to Append to File?
//Unsure why the of_stream Header (Line 49) Produces Japanese Text/Garbage Data in the File Unless at Least One \n Exists at the Beginning of the of_stream Statement (Before the many \t's)
//Figure Out a Perfect Code for Rows for if(i % 10 == 0), in the Event a Different Multiple is Used for NUM_LIMIT?
