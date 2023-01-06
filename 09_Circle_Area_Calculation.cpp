#include<iostream>
#include<conio.h>
#include <cmath> //Needed for different mathematical operations
using namespace std;

int main()
{
    // Area calculation of a circle
    double radius, area;
    cout << "Enter radius of the circle: " << endl;
    cin >> radius;
    cout << endl;

    area =  M_PI * (radius* radius);
    cout << "The area of the circle is: " << area <<endl;
    getch();
}
