#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    /*
In programming, sometimes there is a need to perform some operation more than once or (say) n number of times. Loops come into use when
we need to repeatedly execute a block of statements.

For example: Suppose we want to print “I love Bangladesh!” 10 times. This can be done in two ways as shown below:
01. Manual Method (Iterative Method): Manually we have to write cout for the C++ statement 10 times.
02. Using Loop (for loop, while loop, do while loop)

for Loop
A for loop is a repetition control structure that allows us to write a loop that is executed a specific number of times. The loop enables us
to perform n number of steps together in one line.

Syntax:

for (initialization; condition; update (Increment/Decrement)
{
     // body of the loop
     // statements we want to execute
}

    */
    //Printing I love Bangladesh using for loop!
    int p;
    cout << "Enter how many times you want to print I Love Bangladesh:  ";
    cin >> p;
    cout << endl;

    for (int i=1; i<=p; i++)
    {
        cout << i << " - I Love Bangladesh!!!" << endl;
    }

    //Printing 1 to 100 using for loop!
    cout << "***************************" << endl;
    cout << "***************************" << endl;
    for (int i=1; i<=100; i++)
    {
        cout << i << ", ";
    }
    getch();
}
