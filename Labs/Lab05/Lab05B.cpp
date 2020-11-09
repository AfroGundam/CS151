#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Median(const int data[])
{

sort(data, data + 5);
  
return (double)(data[2] + data[5/2])/2.0;
}

int main() 
{
int data [] = {2,3,6,1,5};
cout<<"The median is "<<Median(data)<<endl;

return 0;
}