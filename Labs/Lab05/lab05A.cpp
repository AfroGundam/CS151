#include <iostream>
using namespace std;

int FirstSearch(const double data[], double target)
{
    int x = 0;
    if(data[0] == target)
    {
        x+=1;
    }
        if(data[2] == target)
    {
        x+=1;
    }
        if(data[3] == target)
    {
        x+=1;
    }
        if(data[4] == target)
    {
        x+=1;
    }

    return x;
}

int main()
{
    double data[] = {1.0,2.0,4.0,2.0,4.0};
    double target = 4.0;
    int A;
    A = FirstSearch(data,target);
    cout << A;
    return 0;
}