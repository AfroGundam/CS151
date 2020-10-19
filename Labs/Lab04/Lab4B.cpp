#include <iostream>
#include <string> 
#include <cmath>
using namespace std;

void NextLeapYear(int& B)
{
    if (B > 0)
    {
        B++;
    }
    else if (B < 0)
    {
        B = 4;
    }
}

string ColorCode(int A)
{
    //int A;
    if (A % 3 == 0)
    {
        return "red";
    }
    else if (A % 4 == 0)
    {
        return "blue";
    }
    else if ((A % 4 == 0) && (A % 3 == 0))
    {
        return "purple";
    }
    else
    {
        return "yellow";
    }
}

void Sort4(double& a, double& b, double& c, double& d)
{
    double top, mid, low, bottom;

    if (a > b) //A assigned top
    {
        top = a;
        mid = b;
    }
    else //or B assigned top
    {
        top = b;
        mid = a;
    }
//Move them down if C is greater than top
    if (top < c)
    {
        low = mid;
        mid = top;
        top = c;
    }
    else if (mid < c)//if C is not greater than top but is greater than mid, move mid to low and C into Mid
    {
        low = mid;
        mid = c;
    }
    else//if C is lowest, move C to 2nd lowest spot
    {
        low = c;
    }
    
    if (top < d) //Check if D is greater than the top value, and if it is then move all other values down
    {
        bottom = low;
        low = mid;
        mid = top;
        top = d;
    }
    else if (mid < d) // rinse and repeat prior events
    {
        bottom = low;
        mid = low;
        mid = d;
    }
    else if (low<d)
    {
        bottom = low;
        low = d;
    }
    else
    {
        bottom = d;
    }

   cout<<endl<<top<<' '<<mid<<' '<<low<<' '<<bottom;
}

int main()
{
    double a,b,c,d;
    int X,Z;

    cout<<endl<<"Leap Year!";
    cout<<endl<<"Enter a number, please: ";
    cin>>Z;
    NextLeapYear(Z);
    cout<<Z<<" was returned"<<endl;

    cout<<endl<<"Sort 4!"<<endl;
    
    cout<<"Enter the 1st number: "<<endl;
    cin>> a;
    cout<<"Enter the 2nd number: "<<endl;
    cin>> b;
    cout<<"Enter the 3rd number: "<<endl;
    cin>>c;
    cout<<"Enter the 4th number: "<<endl;
    cin>>d;

    Sort4(a,b,c,d);
    cout<<endl;
    cout<<endl<<"Color Code!";
    cout<<endl<<"Enter an integer: ";
    cin>> X;
    cout<<endl<<"The color for your number is "<< ColorCode(X) << "!";


return 0;

}