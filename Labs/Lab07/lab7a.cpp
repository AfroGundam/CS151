#include <iostream>
using namespace std;

string OddsVEvens(const int data[], int n)
{
    int odd = 0,even = 0;
    //cout<<n<<endl;
    for(int i = 0; i < n; i++)
    {
        if((data[i] % 2) == 0)
        {
            even++;
            //cout<<data[i]<<" ";
        }
        else
        {
            odd++;
            //cout<<data[i]<<" "<<endl;
        }
    }

    //cout<<even<<endl;
    //cout<<odd<<endl;
    if(even==odd)
    {
        return "Draw";
    }
    else if(odd>even)
    {
        return "Odds";
    }
    else if (even>odd)
    {
        return "Evens";
    }
    
}

int main()
{
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(data)/sizeof(data[0]);
    cout<<OddsVEvens(data,n);

    return 0;
    
}