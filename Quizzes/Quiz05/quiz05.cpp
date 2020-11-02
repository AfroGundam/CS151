#include <iostream>
#include <string>
using namespace std;
//Identify the positions in which each number in the array is at
//when prompted, user will input a number to assign that number in the array to their proper position in either ascending or decending order

void ProperPosition(int a[], int b)
{
    int temp, N, G;
    N = a[b-1];
    G = 0;
    for(int i = 0; i < 5; i += 1)
    {
        if(a[i]<N)
        {
            G+=1;
        }
    }
    temp = a[G];
    a[G] = N;
    a[b-1] = temp;

    //cout <<"C"<<i<<" "<<c[i]<<endl;
}
     
int main()
{
    int a[5], b, n, size;

    //size = sizeof(a)/sizeof(a[0]);
    /*
    cout <<" Please enter 5 single digit numbers for the array";
    for(int i = 0;i < size ;i += 1)
    {

    }
    */
    //cout << a[];
    cout <<" Please enter 5 single digit numbers for the array"<<endl;
    cin>> a[0];
    cout << endl;
    cin>> a[1];
    cout << endl;
    cin>> a[2];
    cout << endl;
    cin>> a[3];
    cout << endl;
    cin>> a[4];

    cout << a[0] << " "<< a[1] << " "<< a[2] << " "<< a[3] << " "<< a[4] << endl;

    cout << "Your proper position selection? "<< endl;
    cin >> b;
    ProperPosition(a,b);

    cout << a[0] << " "<< a[1] << " "<< a[2] << " "<< a[3] << " "<< a[4] << endl;

    
}