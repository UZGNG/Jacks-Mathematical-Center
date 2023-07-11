#include <iostream>
#include <string>
#include "Calculator.h"
#include <conio.h>
#include <cmath>

using namespace std;

//Calculator Function (minifunc1) Start
void minifunc1() {
    system("cls");

    int choice;
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Basic Calculator\n\n ";
    cout << "Input as follows: a+b / a-b / a*b / a/b\n\n";

    Calculator c;
    
        cin >> a >> oper >> b;
        system("cls");
        result = c.Calculate(a, oper, b);
        switch (oper)
        {
        case '+': cout << "The sum of " << a << " and " << b << " AKA " << a << " " << oper << " " << b << " is: " << result << endl;
            break;
        case '-': cout << "The difference between " << a << " and " << b << " AKA " << a << " " << oper << " " << b << " is: " << result << endl;
            break;
        case '*': cout << "The product of " << a << " and " << b << " AKA " << a << " " << oper << " " << b << " is: " << result << endl;
            break;
        case '/': cout << "The quotient of " << a << " and " << b << " AKA " << a << " " << oper << " " << b << " is: " << result << endl;
            break;
        }
        cout << "\n\n";
        cout << "Would you like to try more values (1) Or return to the Main Menu (2)\n\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            minifunc1();

        case 2:
            break;
        }
}
//Calculator Function (minifunc1) End

//Hypotnuse Function (minifunc2) Start
void minifunc2()
{
    system("cls");
    int choice;
    int leg1;
    int leg2;
    cout << "Hypotnuse Calculator -- Just enter the values of the two legs and allow this calculator to do the rest!\n\n";
    cout << "Enter Value of Leg 1: \n\n";
    cin >> leg1;
    cout << "Enter Value of Leg 2: \n\n";
    cin >> leg2;
    double hypotnuse = hypot(leg1, leg2);
    cout << "\n\n";
    cout << "The hypotnuse of " << leg1 << " and " << leg2 << " is: " << hypotnuse << "\n\n";
    cout << "Steps:\n\n" << "The Hypotnuse is Equal to the Square Root of the sums of each leg squared ((leg1 * leg1) + (leg2 * leg2))\n\n" << "So we start by finding the squares of each leg: " << leg1 << " * " << leg1 << " is " << (leg1 * leg1) << " and " << leg2 << " * " << leg2 << " is " << (leg2 * leg2) << "\n\n" << "Next, we add them together to get their sum: " << (leg1 * leg1) << " + " << (leg2 * leg2) << " = " << (leg1 * leg1) + (leg2 * leg2) << "\n\n" << "Finally, we take the Square Root of them to find the Hypotnuse: The Square Root of " << (leg1 * leg1) + (leg2 * leg2) << " is " << hypotnuse << "\n\n";
    cout << "Would you like to try more values (1) Or return to the Main Menu (2)\n\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        system("cls");
        minifunc2();

    case 2:
        break;
    }
}
//Hypotnuse Function (minifunc2) End

//Sine, Cosine, Tangent (minifunc3) Start
void minifunc3()
{
    system("cls");
    double value;
    int choice;


cout << "Sine, Cosine, and Tangent Calculator -- Just enter the values angle and I'll calculate the Sine, cosine, or tangent of it!\n\n First off, which set of values are known? Sine (1) Cosine (2) Tangent (3)\n\n";
cin >> choice;
switch (choice) {
case 1:
    system("cls");
    cout << "Sine\n\n";
    cout << "What is the value of your angle?\n\n";
    cin >> value;
    system("cls");
    cout << "The sine of an angle that is " << value << " degrees is " << sin(value * 3.14159265 / 180) << " degrees\n\n";
    break;

case 2:
    system("cls");
    cout << "Cosine\n\n";
    cout << "What is the value of your angle?\n\n";
    cin >> value;
    system("cls");
    cout << "The cosine of an angle that is " << value << " degrees is " << cos(value * 3.14159265 / 180) << " degrees\n\n";
    break;
case 3:
    system("cls");
    cout << "Tangent\n\n";
    cout << "What is the value of your angle?\n\n";
    cin >> value;
    system("cls");
    cout << "The tangent of an angle that is " << value << " degrees is " << tan(value * 3.14159265 / 180) << " degrees\n\n";
}

cout << "Would you like to try more values (1) Or return to the Main Menu (2)\n\n";
cin >> choice;
switch (choice)
{
case 1:
    system("cls");
    minifunc3();

case 2:
    break;
}
}
//Sine, Cosine, Tangent (minifunc3) Start

//Main Function Start
int main()
{
    int choice;
    cout << "Welcome to Jack's Mathematical Center! You have a few choices for a few different kinds of calculators:\n\n";
    cout << " Calculator (1)\n\n Hypotnuse Finder (2)\n\n Sin, Cos, Tan Calculator (3)\n\n Exit (4)\n\n";
    cin >> choice;

    switch (choice) {

    //Case 1 is calculator
    case 1:
        minifunc1();
        system("cls");
        main();

    //Case 2 is hypotnuse calculator
    case 2:
        minifunc2();
        system("cls");
        main();

    case 3:
       
        minifunc3();
        system("cls");
        main();
        
        /*system("cls");
        main();*/
    //The final case is to exit the program
    case 4:
        system("cls");
        cout << "Are you sure you would like to exit the program? Yes (1) No (2)\n\n";
        int response;
        cin >> response;
        switch (response)
        {
        case 1:
            exit(0);
        case 2:
            system("cls");
            main();
        }


        return 0;
    }
}
//Main Function Start
