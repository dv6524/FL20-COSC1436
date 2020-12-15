// Menu program for Programming Final Project
// Used with Github to ensure that students know the GitHub process.

// ***************************************************************
// DO NOT MODIFY THIS SECTION
// ***************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <fstream>
#include <string>
using namespace std;

string semester = "Fall 2020";

// ***************************************************************
// Function Prototypes Section
// Add your function protytpe here.
// ***************************************************************

void showMenu();
void menu24Smiley(int);
void menu21Tourkakis();
void menu6Dominguez(int);
void menu10GuerreroRivas();
void menu23Vasquez();
// ***************************************************************
// END OF FUNCTION PROTOTYPE AREA
// ***************************************************************

int main()
{
    int choice;       // To hold a menu choice

    // Constants for the menu choices
    const int MAXCHOICE = 30;
    const int MINCHOICE = 1;
    const int EXIT = 0;

    do
    {
        // Display the menu and get the user's choice.
        showMenu();
        cout << "Enter your selection (0 to exit): ";
        cin >> choice;

        // Validate the menu selection.
        if (choice == EXIT)
        {
            cout << endl;
            cout << "Thank for using the " << semester << " Menu Program. " << endl;
            cout << "Have a nice day." << endl;
        }
        else
        {
            switch (choice)
            {
            case 1:                 // Aldossary - call to function goes here
                break;
            case 2:                 // Attar - call to function goes here
                break;
            case 3:                 // Caldwell - call to function goes here
                break;
            case 4:                 // Chanthara - call to function goes here
                break;
            case 5:                 // Dodd - call to function goes here
                break;
            case 6:                 // Dominguez - call to function goes here
		menu6Dominguez();
                break;
            case 7:                 // Fanta - call to function goes here
                break;
            case 8:                 // Fuentes - call to function goes here
                break;
            case 9:                 // Garcia - call to function goes here
                break;
            case 10:                 // Guerrero Rivas - call to function goes here
                menu10GuerreroRivas();
                break;
            case 11:                 // Harerimana - call to function goes here
                break;
            case 12:                 // McNary - call to function goes here
                break;
            case 13:                 // Mendoza - call to function goes here
                break;
            case 14:                 // Price - call to function goes here
                break;
            case 15:                 // Shrestha - call to function goes here
                break;
            case 16:                 // Smith - call to function goes here
                break;
            case 17:                 // Soepangat - call to function goes here
                break;
            case 18:                 // Souhala - call to function goes here
                break;
            case 19:                 // Sundance - call to function goes here
                break;
            case 20:                 // Swift - call to function goes here
                break;
            case 21:                 // Tourkakis - call to function goes here
                menu21Tourkakis();
                break;
            case 22:                 // Turcios - call to function goes here
                break;
            case 23:                 // Vasquez - call to function goes here
		menu23Vasquez();	    
                break;
            case 24:                 // Smiley - call to function goes here
                menu24Smiley(11);
                break;        
            }
        }
    } while (choice != EXIT);

    return 0;
}

//*****************************************************************
// Definition of function showMenu which displays the menu.       *
//*****************************************************************

void showMenu()
{
    cout << "*******************************************************************" << endl;
    cout << "*   Welcome to the " << semester << "Program!                     *" << endl;
    cout << "*      Make a selection from the list below to see student output *" << endl;
    cout << "*                                                                 *" << endl;
    cout << "*      Enter 0 and press Enter to Quit.                           *" << endl;
    cout << "*******************************************************************" << endl;

    cout << "1.  Aldossary" << endl;
    cout << "2.  Attar" << endl;
    cout << "3.  Caldwell" << endl;
    cout << "4.  Chanthara" << endl;
    cout << "5.  Dodd" << endl;
    cout << "6.  Dominguez" << endl;
    cout << "7.  Fanta" << endl;
    cout << "8.  Fuentes" << endl;
    cout << "9.  Garcia" << endl;
    cout << "10. Guerrero Rivas" << endl;
    cout << "11. Harerimana" << endl;
    cout << "12. McNary" << endl;
    cout << "13. Mendoza" << endl;
    cout << "14. Price" << endl;
    cout << "15. Shrestha" << endl;
    cout << "16. Smith" << endl;
    cout << "17. Soepangat" << endl;
    cout << "18. Souhala" << endl;
    cout << "19. Sundance" << endl;
    cout << "20. Swift" << endl;
    cout << "21. Tourkakis" << endl;
    cout << "22. Turcios" << endl;
    cout << "23. Vasquez" << endl;
    cout << "24. Smiley" << endl;
    cout << endl;
}

// *****************************************************************************************
// Function Defintions Section
// *****************************************************************************************
// Add your function below.  
//    Things to check:
//          Function prototype added at the top
//          Available "includes" that could be used
//          Function called from showMenu()
//          All return types MUST be void.
//  
// FunctionName:  menuXXYYYYYYYYYYYY(your parameters)
//                     where XX is your menu number and
//                           YY is your last name with no spaces (camel case)           
// *****************************************************************************************

void menu21Tourkakis()
{
    cout << "Hello World" << endl;
    cout << endl;
}
// *****************************************************************************************
// MENU ID:          10
// FUNCTION:         menu10GuerreroRivas
// DESCRIPTION:      prints a random integer value between 0 and 100.
// OUTPUT EXAMPLE:   "a random number between 0 and 100 is 45." 
//                   --'45' being the random integer chosen by the program---
//                     
// *****************************************************************************************
void menu10GuerreroRivas()
{
    int RandomNumber;
    unsigned seed = time(0);
    srand(seed);

    const int MIN_VALUE = 0;
    const int MAX_VALUE = 100;

    RandomNumber = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

    cout << " a random number between 0 and 100 is " << RandomNumber << "." << endl;
}


// *****************************************************************************************
// MENU ID:          23
// FUNCTION:         menuTurcios
// DESCRIPTION:      prints ASCII Art back of girls head
// OUTPUT EXAMPLE:   back og girls head 
// *****************************************************************************************
void menu23Vasquez();
{
 cout<<"               I I I                                       I I I                "<<endl;
cout<<"             I========\                                 I=========I             "<<endl;
cout<<"           /=========/==\                             /===\========I            "<<endl;
cout<<"         I===============I  ==:::::::::::::::::== == I================\         "<<endl;
cout<<"        /==================I=  ==:::::=:::=::::== =  =====I===========/         "<<endl;
cout<<"        \I= ======== ==== ==::::::::::::::::::::=:==I=========== = I=/          "<<endl;
cout<<"         \\ ====I====I/  ======::::::::=::::::=:= =  \===============/          "<<endl;
cout<<"         /I   == ///\\===  :=======:::::=::::::::::::: +::::::::== + \          "<<endl;
cout<<"         \\    ///   //I= ==:::::====:====::::::::::  II\\  = = I  I//          "<<endl;
cout<<"          \\  ///   //I======::::::::=:=::::::::::====  \\II  ==I=I//           "<<endl;
cout<<"           \\I/ I  //I//====:=:=::::::=::::::::::=:== =/II =  I  I//            "<<endl;
cout<<"             \\I//III//I+++ ::  : :::::  ::::: =: :+=++ /IIIIIII/               "<<endl;
cout<<"                  /I//\  == =:::: ::::::: :: =::::===== =/I\\                   "<<endl;
cout<<"                 \\  \ \ \\= =::::= ==:::==::::::/ =//  ==  II                  "<<endl;
cout<<"                /I=/// \\\\\ ==\::==::= =:::::::/=/// \==\\= II                 "<<endl;
cout<<"                I::/\\:::\\= ==\=:===: ==::::= =:::::::\\\::\\                  "<<endl;
cout<<"               I::/==\\::::\\\ ===\\========= ==========//:=:=:II               "<<endl;
cout<<"              /:::::= //::::\\\  ====I =::::::::::::::::=\::::\= \              "<<endl;
cout<<"              \::::==\\     \\\= \\=I  ==///== =      / \:====:  //             "<<endl;
cout<<"              /:::::::/\\I\\  \\\\=  I //////===      / \\::=====\\             "<<endl;
cout<<"            I::::/::::/ \\ \    \\\\\I ///////  //////  //::::= ==\\            "<<endl;
cout<<"            I ::/:::://   \\ \\     \\\\I////I/////  /   \\::=:=::I\\           "<<endl;
cout<<"            I :/::::/:     \\ ==    ================/    //::==== I/            "<<endl;
cout<<"            \ :=====+=\      \::::::::I::::::::::://    //:====== I\            "<<endl;
cout<<"            /====::::::\     \::::::::::::::::::///    \\\\\::::= II/           "<<endl;
cout<<"            \ ========:I\     \:::::::::::::::::://     \::::::: / I\           "<<endl;
cout<<"            \\ +\ ++==+::\      777777777777777777777    \::\  ::::::\\         "<<endl;
cout<<"              \I  II====:II  77777777777777777777777777777\\\I\ :::://\\        "<<endl;
cout<<"              \\\+I  ++:+\   777777777777777777777777777777 / IIIII  ///        "<<endl;
cout<<"               \:\ I ::::\\ 777777777777777777777777777777/// III::: /          "<<endl;
cout<<"               //I\::  ::\:\777777777777777777777777777777//II:II  /:\          "<<endl;
cout<<"              /:/::/II :: \:\77777777777777777777777777777 /\ I  : I \\         "<<endl;
cout<<"              // /II/:I: 77\:\7777777777777777777777777777/:\I  :::: /:\        "<<endl;
cout<<"               \\ \ ::I:I777\:\77777777777777777777777777/:::\::::::/::/        "<<endl; 
}


// *****************************************************************************************
// MENU ID:          24
// FUNCTION:         menu24Smiley
// DESCRIPTION:      prints the Fibonacci series as defined by the input value
// OUTPUT EXAMPLE:   User enters 9
//                   Program outputs the following:
//                      Fibonacci Sequence (9 iterations): 0, 1, 1, 2, 3, 5, 8, 13, 21
// *****************************************************************************************
void menu24Smiley(int numberOfTimes)
{
    int current = 0;
    int next = 1;
    int nextTerm;

    cout << endl;
    cout << endl;

    cout << "Fibonacci Sequence (" << numberOfTimes << " iterations): ";

    for (int i = 1; i <= numberOfTimes; i++)
    {

        if (i == 1)                    // Prints the first term
        {
            cout << current;
        }
        else if (i == 2)               // Prints the second term
        {
            cout << next;
        }
        else                          // Prints all subsequent terms
        {
            nextTerm = current + next;
            current = next;
            next = nextTerm;

            cout << nextTerm;
        }

        if ((i + 1) <= numberOfTimes)
        {
            cout << ", ";
        }
    }

    cout << endl;
    cout << endl;
}
=======
// Menu program for Programming Final Project
// Used with Github to ensure that students know the GitHub process.

// ***************************************************************
// DO NOT MODIFY THIS SECTION
// ***************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <fstream>
#include <string>
using namespace std;

string semester = "Fall 2020";

// ***************************************************************
// Function Prototypes Section
// Add your function protytpe here.
// ***************************************************************

void showMenu();
void menu24Smiley(int);
void menu6Dominguez(int);
void menu21Tourkakis();

// ***************************************************************
// END OF FUNCTION PROTOTYPE AREA
// ***************************************************************

int main()
{
    int choice;       // To hold a menu choice

    // Constants for the menu choices
    const int MAXCHOICE = 30;
    const int MINCHOICE = 1;
    const int EXIT = 0;

    do
    {
        // Display the menu and get the user's choice.
        showMenu();
        cout << "Enter your selection (0 to exit): ";
        cin >> choice;

        // Validate the menu selection.
        if (choice == EXIT)
        {
            cout << endl;
            cout << "Thank for using the " << semester << " Menu Program. " << endl;
            cout << "Have a nice day." << endl;
        }
        else
        {
            switch (choice)
            {
            case 1:                 // Aldossary - call to function goes here
                break;
            case 2:                 // Attar - call to function goes here
                break;
            case 3:                 // Caldwell - call to function goes here
                break;
            case 4:                 // Chanthara - call to function goes here
                break;
            case 5:                 // Dodd - call to function goes here
                break;
            case 6:                 // Dominguez - call to function goes here
                menu6Dominguez();
                break;
            case 7:                 // Fanta - call to function goes here
                break;
            case 8:                 // Fuentes - call to function goes here
                break;
            case 9:                 // Garcia - call to function goes here
                break;
            case 10:                 // Guerrero Rivas - call to function goes here
                break;
            case 11:                 // Harerimana - call to function goes here
                break;
            case 12:                 // McNary - call to function goes here
                break;
            case 13:                 // Mendoza - call to function goes here
                break;
            case 14:                 // Price - call to function goes here
                break;
            case 15:                 // Shrestha - call to function goes here
                break;
            case 16:                 // Smith - call to function goes here
                break;
            case 17:                 // Soepangat - call to function goes here
                break;
            case 18:                 // Souhala - call to function goes here
                break;
            case 19:                 // Sundance - call to function goes here
                break;
            case 20:                 // Swift - call to function goes here
                break;
            case 21:                 // Tourkakis - call to function goes here
                menu21Tourkakis();
                break;
            case 22:                 // Turcios - call to function goes here
                break;
            case 23:                 // Vasquez - call to function goes here
		menu23Vasquez();
                break;
            case 24:                 // Smiley - call to function goes here
                menu24Smiley(11);
                break;        
            }
        }
    } while (choice != EXIT);

    return 0;
}

//*****************************************************************
// Definition of function showMenu which displays the menu.       *
//*****************************************************************

void showMenu()
{
    cout << "*******************************************************************" << endl;
    cout << "*   Welcome to the " << semester << "Program!                     *" << endl;
    cout << "*      Make a selection from the list below to see student output *" << endl;
    cout << "*                                                                 *" << endl;
    cout << "*      Enter 0 and press Enter to Quit.                           *" << endl;
    cout << "*******************************************************************" << endl;

    cout << "1.  Aldossary" << endl;
    cout << "2.  Attar" << endl;
    cout << "3.  Caldwell" << endl;
    cout << "4.  Chanthara" << endl;
    cout << "5.  Dodd" << endl;
    cout << "6.  Dominguez" << endl;
    cout << "7.  Fanta" << endl;
    cout << "8.  Fuentes" << endl;
    cout << "9.  Garcia" << endl;
    cout << "10. Guerrero Rivas" << endl;
    cout << "11. Harerimana" << endl;
    cout << "12. McNary" << endl;
    cout << "13. Mendoza" << endl;
    cout << "14. Price" << endl;
    cout << "15. Shrestha" << endl;
    cout << "16. Smith" << endl;
    cout << "17. Soepangat" << endl;
    cout << "18. Souhala" << endl;
    cout << "19. Sundance" << endl;
    cout << "20. Swift" << endl;
    cout << "21. Tourkakis" << endl;
    cout << "22. Turcios" << endl;
    cout << "23. Vasquez" << endl;
    cout << "24. Smiley" << endl;
    cout << endl;
}

// *****************************************************************************************
// Function Defintions Section
// *****************************************************************************************
// Add your function below.  
//    Things to check:
//          Function prototype added at the top
//          Available "includes" that could be used
//          Function called from showMenu()
//          All return types MUST be void.
//  
// FunctionName:  menuXXYYYYYYYYYYYY(your parameters)
//                     where XX is your menu number and
//                           YY is your last name with no spaces (camel case)           
// *****************************************************************************************

void menu21Tourkakis()
{
    cout << "Hello World" << endl;
    cout << endl;
}
// *****************************************************************************************
// MENU ID:          24
// FUNCTION:         menu24Smiley
// DESCRIPTION:      prints the Fibonacci series as defined by the input value
// OUTPUT EXAMPLE:   User enters 9
//                   Program outputs the following:
//                      Fibonacci Sequence (9 iterations): 0, 1, 1, 2, 3, 5, 8, 13, 21
// *****************************************************************************************
void menu24Smiley(int numberOfTimes)
{
    int current = 0;
    int next = 1;
    int nextTerm;

    cout << endl;
    cout << endl;

    cout << "Fibonacci Sequence (" << numberOfTimes << " iterations): ";

    for (int i = 1; i <= numberOfTimes; i++)
    {

        if (i == 1)                    // Prints the first term
        {
            cout << current;
        }
        else if (i == 2)               // Prints the second term
        {
            cout << next;
        }
        else                          // Prints all subsequent terms
        {
            nextTerm = current + next;
            current = next;
            next = nextTerm;

            cout << nextTerm;
        }

        if ((i + 1) <= numberOfTimes)
        {
            cout << ", ";
        }
    }

    cout << endl;
    cout << endl;
}

// *****************************************************************************************
// MENU ID:          6
// FUNCTION:         menu6Dominguez
// DESCRIPTION:      This program while find the average of three grades.
// OUTPUT EXAMPLE:   User enters: 90 99 95
//                   Program outputs the following:
//                   Congraulations, you passed with an A!
//                   (Really happy face computer)
// *****************************************************************************************
void menu6Dominguez(int)
{
      int grade1;             //holds the first grade choice
      int grade2;             //holds the second grade choice
      int grade3;             //holds the third grade choice
      int finalGrade;         //holds final grade choice to display computer
      float average;	      // holds the grade average

// Intro to Program.
      cout << "Welcome to Ivan Dominguez's Program!\n"
           << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
           << "Today we will calculate your final grade.\n"
           << "Please enter your three grades. (0-100)\n";
	cin  >> grade1 >> grade2 >> grade3;

// Math section, and average print out.
      average = ( grade1 + grade2 + grade3 )/3;

	if (average <=100 && average >= 90)
      {
            finalGrade = 1;
		cout << "Congraulations, you passed with an A!\n";
      }

	else if (average >= 80 && average < 90)
      {
		cout << "Congraulations, you passed with a B!\n";
            finalGrade = 2;
      }

	else if (average >= 70 && average < 80)
      {
            cout << "Whew, you passed with a C!\n";
            finalGrade = 3;
      }

	else if (average >= 0 && average < 70)
      {
		cout << "You failed.\n";
            finalGrade = 4;
      }

       else if (average > 100 || average < 0)
      {
            cout << "Invaild data\n";
      }
      
// Computer print out.
      switch (finalGrade)
      {
            case 1:     // Call to really happy face computer.
                  cout  << "      .--------------------.    \n"
                        << "      |.-````````````````-.|    \n"
                        << "      ||     ^      ^     ||    \n"
                        << "      ||    (O)    (O)    ||    \n"
                        << "      ||        <         ||    \n"
                        << "      ||    (        )    ||    \n"
                        << "      ||     (______)     ||    \n"
                        << "      |'-________________-'|    \n"
                        << "      `-------)___(-------`     \n"
                        << "       _________________        \n"
                        << "      /::::::::::::::::/        \n"
                        << "     /::::========::::/         \n"
                        << "    `~~~~~~~~~~~~~~~~`          \n";
                  break;

            case 2:     // Call to happy face computer.
                  cout  << "      .--------------------.    \n"
                        << "      |.-````````````````-.|    \n"
                        << "      ||     ^      ^     ||    \n"
                        << "      ||    (O)    (O)    ||    \n"
                        << "      ||        <         ||    \n"
                        << "      ||                  ||    \n"
                        << "      ||     (______)     ||    \n"
                        << "      |'-________________-'|    \n"
                        << "      `-------)___(-------`     \n"
                        << "       _________________        \n"
                        << "      /::::::::::::::::/        \n"
                        << "     /::::========::::/         \n"
                        << "    `~~~~~~~~~~~~~~~~`          \n";
                  break;   

            case 3:     // Call to plain face computer.
                  cout  << "      .--------------------.    \n"
                        << "      |.-````````````````-.|    \n"
                        << "      ||     -      -     ||    \n"
                        << "      ||    (o)    (o)    ||    \n"
                        << "      ||        <         ||    \n"
                        << "      ||                  ||    \n"
                        << "      ||    ----------    ||    \n"
                        << "      |'-________________-'|    \n"
                        << "      `-------)___(-------`     \n"
                        << "       _________________        \n"
                        << "      /::::::::::::::::/        \n"
                        << "     /::::========::::/         \n"
                        << "    `~~~~~~~~~~~~~~~~`          \n";
                  break;

            case 4:     // Call to bad face computer.                  
                  cout  << "      .--------------------.    \n"
                        << "      |.-````````````````-.|    \n"
                        << "      ||     v      v     ||    \n"
                        << "      ||    (x)    (x)    ||    \n"
                        << "      ||        <         ||    \n"
                        << "      ||                  ||    \n"
                        << "      ||    (~~~~~~~~)    ||    \n"
                        << "      |'-________________-'|    \n"
                        << "      `-------)___(-------`     \n"
                        << "       _________________        \n"
                        << "      /::::::::::::::::/        \n"
                        << "     /::::========::::/         \n"
                        << "    `~~~~~~~~~~~~~~~~`          \n";

                  break;
      }

//Program exit.
      cout << "\n";
      cout << "Thank for using the Ivan Dominguez's Program.\n";
      cout << "Have a nice day!\n";
}
