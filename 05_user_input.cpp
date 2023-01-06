#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    // declared 3 variables
    int num;
    double dnum;
    char ch;
    char name[21];

    // With cin, we take input from the user.
    // To make it easy and convenient, we want our user to know what should be the input.

    cout << "Enter an integer number: ";
    cin >> num;
    cout << endl;

    cout << "Enter a double: ";
    cin >> dnum;
    cout << endl;

    cout << "Enter a character: ";
    cin >> ch;
    cout << endl;

    cout << "Enter your name: ";
    cin >> name;
    cout << endl;


    cout <<" Your entered integer is: " << num << endl;
    cout <<" Your entered double is: " << dnum << endl;
    cout <<" Your entered character is: " << ch << endl;
    cout <<"Welcome Mr. " << name <<", welcome to the world of C++ Programming!!!";
    getch();
}
