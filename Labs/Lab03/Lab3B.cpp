#include <iostream>
#include <string> 
#include <cmath>
using namespace std;

double Perimiter(double lh, double wh);

void Distance(double a, double b, double& r);

string Arrangements(char a, char b, char c);


int main()
{
    double lh, wh, r, pointA, pointB;
    char a,b,c;

    cout<<"Width: ";
    cin>> wh;
    cout<<"Length: ";
    cin>> lh;
    cout<<"Perimiter: "<<Perimiter(lh,wh)<<endl;

    cout<<"Point A: ";
    cin>> pointA;
    cout<<"Point B: ";
    cin>> pointB;
    Distance(pointA, pointB, r);
    cout<<"Distance between two points, A and B: "<<r<<endl;

    cout<<"Arranging A, B, and C "<<Arrangements(a, b, c)<<endl;

return 0;
}

//Function Definitions

double Perimiter(double lh, double wh)
{
    return 2*(lh + wh);
}

void Distance(double a,double b, double& r)
{
r = sqrt(((a*a)+(b*b)));   
}

string Arrangements(char a, char b, char c)
{  
string arr="abc acb bac cab bca cba";
//had a fairly hard time on this part. Will be utilizing tutoring.   
return arr;
}