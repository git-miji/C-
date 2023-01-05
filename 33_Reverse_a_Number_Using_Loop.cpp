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

    cout << "Finding Reverse of given number using while loop" << endl;
    cout << "**********************************************************" << endl;
    while (temp !=0)
    {
        rem = temp % 10;
        reverse_num = reverse_num * 10 + rem;
        temp = temp / 10;
    }
    cout << "Reverse of the given Number is: " << reverse_num << endl;
    getch();
}
