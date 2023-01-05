<<<<<<< HEAD
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, rem, temp, sum = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Calculating sum of digits of given number using while loop" << endl;
    cout << "**********************************************************" << endl;
    while (temp !=0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    cout << "Sum of digits for the given Number is: " << sum << endl;
    getch();
}
=======
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, rem, temp, sum = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Calculating sum of digits of given number using while loop" << endl;
    cout << "**********************************************************" << endl;
    while (temp !=0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    cout << "Sum of digits for the given Number is: " << sum << endl;
    getch();
}
>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
