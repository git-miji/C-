<<<<<<< HEAD
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, rem, temp, armstrong_num = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Finding Palindrome of a given number using while loop" << endl;
    cout << "*****************************************************" << endl;

    while (temp !=0)
    {
        rem = temp % 10;
        armstrong_num = armstrong_num + rem * rem * rem;
        temp = temp / 10;
    }

    if (number == armstrong_num)
    {
        cout << "Your entered number is an Armstrong Number!!!";
    }
    else
    {
        cout << "Your entered number " <<number << " is not an Armstrong Number!!!";
    }
    getch();
}
=======
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, rem, temp, armstrong_num = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Finding Palindrome of a given number using while loop" << endl;
    cout << "*****************************************************" << endl;

    while (temp !=0)
    {
        rem = temp % 10;
        armstrong_num = armstrong_num + rem * rem * rem;
        temp = temp / 10;
    }

    if (number == armstrong_num)
    {
        cout << "Your entered number is an Armstrong Number!!!";
    }
    else
    {
        cout << "Your entered number " <<number << " is not an Armstrong Number!!!";
    }
    getch();
}
>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
