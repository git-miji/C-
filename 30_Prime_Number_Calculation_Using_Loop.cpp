<<<<<<< HEAD
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int p, i, counter = 0;
    cout << "Enter any number: ";
    cin >> p;
    cout << endl;

    cout << "Prime Number Identification using for loop" << endl;
    cout << "*******************************************" << endl;
    for (i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            cout << "Your entered number is divisible by " << i << endl;
            counter++;
            break;
        }
    }
    if (counter == 0)
    {
        cout << "The number is a prime number!";
    }
    else
    {
        cout << "Hence it is not a prime number!";
    }
    cout << endl << endl;

    cout << "Prime Number Identification using while loop" << endl;
    cout << "*******************************************" << endl;

    counter = 0;
    i = 2;
    while (i<p)
    {
        if (p % i == 0)
        {
            cout << "Your entered number is divisible by " << i << endl;
            counter++;
            break;
        }
        i++;
    }
    if (counter == 0)
    {
        cout << "The number is a prime number!";
    }
    else
    {
        cout << "Hence it is not a prime number!";
    }

    cout << endl << endl;

    cout << "Prime Number Identification using do while loop" << endl;
    cout << "*******************************************" << endl;

    counter = 0;
    i = 2;
    do
    {
        if (p % i == 0)
        {
            cout << "Your entered number is divisible by " << i << endl;
            counter++;
            break;
        }
        i++;
    }
    while (i<p);

    if (counter == 0)
    {
        cout << "The number is a prime number!";
    }
    else
    {
        cout << "Hence it is not a prime number!";
    }
    getch();
}
=======
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int p, i, counter = 0;
    cout << "Enter any number: ";
    cin >> p;
    cout << endl;

    cout << "Prime Number Identification using for loop" << endl;
    cout << "*******************************************" << endl;
    for (i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            cout << "Your entered number is divisible by " << i << endl;
            counter++;
            break;
        }
    }
    if (counter == 0)
    {
        cout << "The number is a prime number!";
    }
    else
    {
        cout << "Hence it is not a prime number!";
    }
    cout << endl << endl;

    cout << "Prime Number Identification using while loop" << endl;
    cout << "*******************************************" << endl;

    counter = 0;
    i = 2;
    while (i<p)
    {
        if (p % i == 0)
        {
            cout << "Your entered number is divisible by " << i << endl;
            counter++;
            break;
        }
        i++;
    }
    if (counter == 0)
    {
        cout << "The number is a prime number!";
    }
    else
    {
        cout << "Hence it is not a prime number!";
    }

    cout << endl << endl;

    cout << "Prime Number Identification using do while loop" << endl;
    cout << "*******************************************" << endl;

    counter = 0;
    i = 2;
    do
    {
        if (p % i == 0)
        {
            cout << "Your entered number is divisible by " << i << endl;
            counter++;
            break;
        }
        i++;
    }
    while (i<p);

    if (counter == 0)
    {
        cout << "The number is a prime number!";
    }
    else
    {
        cout << "Hence it is not a prime number!";
    }
    getch();
}
>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
