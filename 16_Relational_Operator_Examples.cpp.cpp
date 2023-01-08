#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter any integer: " << endl;
    cin >> num;
    cout << endl <<endl;

//Finding even odd of an input number

    if (num % 2 == 0)
    {
        cout << "Your entered number is even" << endl;
    }
    else
    {
        cout << "Your entered value is odd." << endl << endl;
    }

//Finding largest number of user inputs

    int num1, num2;
    cout << "Enter First number: " << endl;
    cin >> num1;
    cout << endl;
    cout << "Enter Second number: " << endl;
    cin >> num2;
    cout << endl;
    if (num1 > num2)
    {
        cout << num1 <<" is greater than " << num2 << endl;
    }
    else if (num1 < num2)
    {
        cout << num2 <<" is greater than " << num1 << endl << endl;
    }
    else
    {
        cout << "Your entered numbers are equal!!!" << endl;
    }

//Finding pass - pass of a student using his/her obtained marks

    int mark;
    cout << "Enter Mark: " << endl;
    cin >> mark;
    cout << endl;

    if (mark >= 33)
    {
        cout << "The Student Passed the exam with mark: " << mark << endl;
    }
    else
    {
        cout << "The Student Failed in the exam for " << (33 -mark) <<" mark!" << endl;
    }

//Finding pass - pass of a student using his/her obtained marks

    int p;
    cout << "Enter any integer number: " << endl;
    cin >> p;
    cout << endl;

    if (p >= 0)
    {
        cout << "The absolute value of your entered number is: " << p << endl;
    }
    else
    {
        cout << "The absolute value of your entered number is: " << (-p) << endl;
    }
    getch();
}
