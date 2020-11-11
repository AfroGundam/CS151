#include <iostream>
//#include <string>
//#include <cctype>
#include <locale>
using namespace std;

int GCD(int m, int n)
{
    int ans;
    m = abs(m);
    n = abs(n);
    
    if (m > n) 
    {   
        for (int i = 1; i <=  m; ++i) 
        {
            if (n % i == 0 && m % i ==0) 
            {
                ans = i;
            }
        }
        return ans;
    }
    else
    {
        for (int i = 1; i <=  n; ++i) 
        {
            if (m % i == 0 && n % i ==0) 
            {
                ans = i;
            }
        }
        return ans;
    }
}

string ToUppercase(const string str)
{
    locale loc;
    cout<<str<<"...?"<<endl;
    cout<<"Did you mean..."<<endl;
    for(size_t i=0; i< str.length(); ++i)
    {
        cout<<toupper(str[i],loc);
    }
    cout<<"?!";
    return "u";
}

int main()
{
    int m, n, F;
    string str;
    cout<<"Enter the first number"<<endl;
    cin>>m;
    cout<<"Enter the second number"<<endl;
    cin>>n;

    F = GCD(m,n);

    cout<<"The Greatest common divisor is: "<< F <<endl;

    cout<<"Enter a random word"<<endl;
    cin>>str;
    ToUppercase(str);
    
    

    return 0;
}