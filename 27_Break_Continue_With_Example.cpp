#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Break Statement: The break statement is used to jump out of a loop. It breaks the current flow of the program based on specific condition.
In case of inner loop, it breaks only the inner loop.

Continue Statement:
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

*/

    int i;
    cout << "Break Statement" << endl;
    for (i=1; i<=20; i++)
    {
        if (i==10)          // When condition matches, the loop will break and no other statement will get executed.
        {
            break;
        }
        cout<< i << ", ";
    }
    cout << endl;
    cout <<"------------------------------" << endl;
    cout <<"------------------------------" << endl;
    cout << "Switch Statement" << endl;
    for (i=1; i<=20; i++)
    {
        if (i==10)          // When condition matches, the loop will break only for that specific condition and operation will be forwarded to outer loop.
        {
            continue;
        }
        cout<< i << ", ";
    }
    getch();
}
