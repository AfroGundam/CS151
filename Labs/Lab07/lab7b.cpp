#include <iostream>
#include <string>

using namespace std;

int PrimeCount(int lo, int hi)
{
    int n, amt;
    amt = hi-lo;
    bool isPrime;
    
    // 0 and 1 are not prime numbers
    for (int x = hi; x > lo ; x--)
    {
        cout<<"hi"<<hi<<" "<<lo<<" "<<"lo";
        if (lo == 0 || lo == 1) 
        {
            isPrime = false;
            
        } 
        else 
        {
            for (int i = 2; i <= x / 2; ++i) 
            {
                if (x % i == 0) 
                {
                    isPrime = false;
                }
                else
                {
                    isPrime = true;
                    cout << x << endl;
                }                
            }
        }
    }
    return 0;
}

void helper(const string &values, const int p, string pre) 
{
    if (p == 0) {
        cout << pre << endl;
        return;
    }

    // iterate over the characters of string
    for (int i = 0; i < values.length(); i++) 
    {
        string npre;
        npre = pre + values[i];
        helper(values, p - 1, npre);
    }
}

void Permutation(const string &values, const int p) 
{
    helper(values, p, "");
}

int main() {
    int lo, hi, x, y, ans;
    bool isPrime = true;

    cout << "Enter a positive integer: "<<endl;
    cin >> x;
    cout << "Enter another positive integer: "<<endl;
    cin >> y;
    cout << x << " " << y;

    PrimeCount(x,y);
    cout<<endl;
    Permutation("rice", 2);
    



}