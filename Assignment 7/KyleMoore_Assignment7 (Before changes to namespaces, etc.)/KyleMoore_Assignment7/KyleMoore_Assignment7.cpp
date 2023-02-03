/*Kyle Moore
  Assignment 7
  Last Edited: December 7, 2022
  Assignment Purpose: *****PLACEHOLDER******/

  //Application file KyleMoore_Assignment7.cpp: This is the APPLICATION (DRIVER/TESTER) for the class *PLACEHOLDER*
       //Contains the main Program/Application to Execute



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

        Administrator admin("Mr. John Smith", "963-85-2741", 10000.00);

        admin.readData();

        admin.print();

        admin.printCheck();

        return 0;

        //Displays and Signals End of Program Notice to User
        cout << "\n\n\n\n\nThis program has successfully ended. Thank you for using it hooman! Goodbye! \n\n\n\a";

        //return - Terminates the Program Successfully
        return 0;
    }
}