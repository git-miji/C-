#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    /*
While Loop:


Syntax:



    */
    //Printing I love Bangladesh using while loop!
    int p;
    cout << "Enter how many times you want to print I Love Bangladesh:  ";
    cin >> p;
    cout << endl;

    int i = 1;
    while (i<=p)
    {
        cout << i << " - I Love Bangladesh!!!" << endl;
        i++;
    }
    cout <<"End of 1st while loop!!!" << endl;

    //Printing 1 to 100 using for loop!
    cout << "***************************" << endl;
    cout << "***************************" << endl;
    while (i<=100)
    {
        cout << i << ", ";
        i++;
    }
    cout <<"End of 2nd while loop!!!" << endl;

    getch();
}
