#include <iostream>
#include <string>
using namespace std;

bool Monotonic(const int array[])
{
    if (array[0] < array[1])//Decending
    {
        if (array[1]<array[2])
        {
            if (array[2]<array[3])
            {
                if (array[3]<array[4])
                {
                    return true;
                }
                else
                {
                    return false;
                }
                
            }
            else
            {
                return false;
            }
            
        }
        else
        {
            return false;
        }
        
    }
    else if (array[0]>array[1])//Asending
    {
        if (array[1]>array[2])
        {
            if (array[2]>array[3])
            {
                if (array[3]>array[4])
                {
                    return true;
                }
                else
                {
                    return false;
                }
                
            }
            else
            {
                return false;
            }
            
        }
        else
        {
            return false;
        }
        
    }
    else
    {
        return false;
    }
    
}


int main()
{
    int array[] = {1,2,3,4,5};
    cout << Monotonic(array) <<endl;
return 0;
}