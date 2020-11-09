#include <iostream>
using namespace std;

int Minimum(const int data[],int n)
{
    int temp = 2000;
    n = sizeof(data);//sizeof(data[0]);
    cout << n << endl;
    for(int i = 0;i < n-1;i += 1)
    {
        if(data[i] <= temp)
        {
            temp = data[i];
        }
    }
    return temp;
}

int main()
{
    int data[] = {1,2,4,3,2,6,5};
    int n;
    cout << Minimum(data,n)<< " "<< n;

}
