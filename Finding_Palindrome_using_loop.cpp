#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number, rem, temp, reverse_num = 0, palindrome = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Finding Palindrome of a given number using while loop" << endl;
    cout << "*****************************************************" << endl;
    int counter = 0;
    while (temp !=0)
    {
        rem = temp % 10;
        reverse_num = reverse_num * 10 + rem;
        temp = temp / 10;

/*        if (number == reverse_num)
        {
            cout << "Palindrome of your entered number is: " << reverse_num << " !!!" << endl;
            break;
        }
        else
        {
            palindrome = number + reverse_num;
            temp = palindrome;
        }
*/    }
    cout << reverse_num;
    if (number!=reverse_num)
    {
        temp = reverse_num + number;
        number = reverse_num;
        while (temp!=0)
        {
            rem = temp % 10;
            reverse_num = reverse_num * 10 + rem;
            temp = temp / 10;
        }
    }
    getch();
}
