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

void swap(double x, double y)
{
    double tmp = x;
    x = y;
    y = tmp;
}

void Sort4(double& a, double& b, double& c, double& d)
{
    //double top, mid, low, bottom;

    if (a <= b)
    {
        swap(a,b);
    }
    
    if (c <= d)
    {
        swap(c,d);
    }

    if (a <= c)
    {
        swap(a,c);
    }

    if (b <= d)
    {
        swap(b,d);
    }

    if (b <= c)
    {
        swap(b,c);
    }

    cout<< a << b << c << d;
}

