#include <iostream>
#include <string>
using namespace std;

//Define Function Here
int SDPC(int P)
{
    int x = 0;
    if (P%2 == 0 && P!=0)
    {
        P = P/2;
        //cout<<P<<" 2"<<endl;
        x++;
    }
    
    if (P%3 == 0 && P!=0)
    {
        P = P/3;
        //cout<<P<<" 3"<<endl;
        x++;
    }
    
    if (P%5 == 0 && P!=0)
    {
        P = P/5;
        //cout<<P<<" 5"<<endl;
        x++;
    }
    
    if (P%7 == 0 && P!=0)
    {
        P = P/7;
        //cout<<P<<" 7"<<endl;
        x++;
    }
    
    return x;
}

int main()
{
    int P;
    cout<<"Enter number"<<endl;
    cin>>P;
    cout<<SDPC(P)<<endl;
    
    cout<<"Enter number"<<endl;
    cin>>P;
    cout<<SDPC(P)<<endl;
    
    cout<<"Enter number"<<endl;
    cin>>P;
    cout<<SDPC(P)<<endl;

 return 0;
}
