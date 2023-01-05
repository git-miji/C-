<<<<<<< HEAD
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, rem, temp, reverse_num = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Checking the given number whether it is Palindrome or Not using while loop" << endl;
    cout << "**************************************************************************" << endl;
    while (temp !=0)
    {
        rem = temp % 10;
        reverse_num = reverse_num * 10 + rem;
        temp = temp / 10;
    }
    if (number == reverse_num)
    {
        cout << "The reverse of your entered number is: "<< reverse_num << ". Therefore it is Palindrome!!!" << endl;
    }
    else
    {
        cout << "Your Entered number is not Palindrome!!!" << endl;
    }
    getch();
}
=======
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, rem, temp, reverse_num = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Checking the given number whether it is Palindrome or Not using while loop" << endl;
    cout << "**************************************************************************" << endl;
    while (temp !=0)
    {
        rem = temp % 10;
        reverse_num = reverse_num * 10 + rem;
        temp = temp / 10;
    }
    if (number == reverse_num)
    {
        cout << "The reverse of your entered number is: "<< reverse_num << ". Therefore it is Palindrome!!!" << endl;
    }
    else
    {
        cout << "Your Entered number is not Palindrome!!!" << endl;
    }
    getch();
}
>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
