#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

double finalX, finalY, finalZ;

void addition(double a,double b, double c, double g, double h, double i)
{ 
    finalX=a+g;
    finalY=b+h;
    finalZ=c+i;
}

void subtraction(double a,double b, double c, double g, double h, double i)
{   
    finalX=a-g;
    finalY=b-h;
    finalZ=c-i;
}

void dotProduct(double a,double b, double c, double g, double h, double i)
{
    finalX=a*g;
    finalY=b*h;
    finalZ=c*i;
}

void crossProduct(double a,double b, double c, double g, double h, double i)
{
    double X1= a;
    double Y1= b;
    double Z1= c;
    double X2= g;
    double Y2= h;
    double Z2= i;
    finalX=(Y1*Z2-Z1*Y2);
    finalY=(X1*Z2-Z1*X2);
    finalZ=(X1*Y2-Y1*X2);
}

void menu(){
    cout<<"[ -- M E N U -- ]"<<endl;
    cout<<"[1] Addition"<<endl;
    cout<<"[2] Subtraction"<<endl;
    cout<<"[3] Dot Product"<<endl;
    cout<<"[4] Cross Product"<<endl<<endl;
    cout<<"Please enter a number to continue..."<<endl;
}

void calculator()
{
    double a1,b1,c1,a2,b2,c2;
    int selection;
    menu();
    cin>>selection;
    cout<< "Please enter the coordinates of vector 1. [x,y,z] ";
    cin>>a1;
    cin>>b1;
    cin>>c1;
    cout<< "Please enter the coordinates of vector 2. [x,y,z] ";
    cin>>a2;
    cin>>b2;
    cin>>c2;
    if (selection == 1)
    {
        addition(a1,b1,c1,a2,b2,c2);
        cout<<"The sum of the two vectors is: "<<"<"<<finalX<<","<<finalY<<","<<finalZ<<">"<< endl;    
    }
    else if (selection == 2)
    {
        subtraction(a1,b1,c1,a2,b2,c2);
        cout<<"The difference of the two vectors is: "<<"<"<<finalX<<","<<finalY<<","<<finalZ<<">"<< endl;
    }
    else if (selection == 3)
    {
        dotProduct(a1,b1,c1,a2,b2,c2);
        cout<<"The dot product of the two vectors is: "<<"<"<<finalX<<","<<finalY<<","<<finalZ<<">"<< endl;
    }
    else if (selection == 4)
    {
        crossProduct(a1,b1,c1,a2,b2,c2);
        cout<<"The cross product of the two vectors is: "<<"<"<<finalX<<","<<finalY<<","<<finalZ<<">"<< endl;
    }
    else
    {
        cout<<"Invalid Operation"<<endl;
    }       
}

int main()
{
    calculator();
    return 0;
}
