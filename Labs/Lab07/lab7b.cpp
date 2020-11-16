#include <iostream>
#include <string>

using namespace std;

int PrimeCount(int lo, int hi)
{
    bool isPrime;

    while (lo < hi) {
        isPrime = true;
        if (lo == 0 || lo == 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= lo / 2; ++i) {
                if (lo % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime)
            cout << lo << " ";

        ++lo;
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
    
    if(x>y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }

    cout << "Prime numbers between "<< x<< "and "<< y<< " are:"<<endl;
    PrimeCount(x,y);

    

    cout<<" " <<endl<<endl;
    cout<<"Rice permutation"<<endl;
    Permutation("rice", 2);
    



}