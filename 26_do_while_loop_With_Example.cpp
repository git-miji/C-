#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    /*
Do While Loop:


Syntax:

    */
    //Printing I love Bangladesh using while loop!
    int p;
    cout << "Enter how many times you want to print I Love Bangladesh:  ";
    cin >> p;
    cout << endl;

    int i = 1;
    do
    {
        cout << i << " - I Love Bangladesh!!!" << endl;
        i++;
    }
    while (i<=p);
    cout <<"End of 1st do while loop!!!" << endl;

    //Printing 1 to 100 using for loop!
    cout << "***************************" << endl;
    cout << "***************************" << endl;
    do
    {
        cout << i << ", ";
        i++;
    }
    while (i<=100);
    cout <<"End of 2nd do while loop!!!" << endl;

    getch();
}

