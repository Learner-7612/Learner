// Made by Prem

#include <iostream>
using namespace std;

int main()
{
  double First_number, Second_number;
  double addition, subtraction, multiplication, division;
  double operation;
  char c;

        cout << "It's a basic calculator program made from c++ using if statement." << endl;
        cout << "You can Perform four basic calculation(+, -, *, /) with the help of this calculator." << endl;


while(c != 'n')         // Loop Start here
{

  cout << endl;
  cout << "Enter First number: " << endl;       // Ask user for the first value
  cin >> First_number;                          // user input
  cout << "Enter Second number: " << endl;      // Ask user for the second value
  cin >> Second_number;                         // user input
  cout << "Enter the operation you want to do:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division " << endl;      // Ask user for the operation to perform
  cin >> operation;                             // user input according to if statement


  if(operation == 1)            // if user press 1 in operation, program perfoms addition
  {
    addition = First_number + Second_number;    // done additon
    cout << First_number << " + " << Second_number << " = " << addition << endl;        // answer will be shown by this line
  }

   if(operation == 2)           // if user press 2 in operation, progarm performs subtraction
  {
    subtraction = First_number - Second_number;         // done subtraction
    cout << First_number << " - " << Second_number << " = " << subtraction << endl;     // answer
  }

   if(operation == 3)           // if user press 3 in operation, program performs multiplication
  {
    multiplication = First_number * Second_number;      // done multiplication
    cout << First_number << " * " << Second_number << " = " << multiplication << endl;  // answer
  }

   if(operation == 4)           // if user press 4 in operation, program performs division
  {
     if(Second_number == 0)     // if denominator is 0, calculation cannot be done
     {
        cout << "Second number cannot be 0." << endl;
        cout << "Please change your second number: " << endl;
        cin >> Second_number;
        division = First_number / Second_number;          // done division
        cout << First_number << " / " << Second_number << " = " << division << endl;    // answer
     }
     else
     {
         division = First_number / Second_number;     // done divison
         cout << First_number << " / " << Second_number << " = " << division << endl; // answer
     }
  }

        cout << "\n\nCalculate again?";
        cin >> c;

        //cout << "\n\n.Calculate_again? ";
        //cin >> c;
}

//------------Code to exit program smoothly----------------- 
        cin.ignore();
        cout << "Press enter to exit" << endl;
        cin.ignore();

}
