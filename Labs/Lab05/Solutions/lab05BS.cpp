#include <iostream>
#include <string>
using namespace std;

int Swap(int& a,int& b)
{
	int t = a;
	a = b;
	b = t;
}

int Median(const int data[])
{
	int p[4] = {0,1,2,3}; //positions

	//sort the first 2 elements
	if(data[1] < data[0])
	{
		p[0] = 1;
		p[1] = 0;
	}

	//sort the next 2 elements
	if(data[3] < data[2])
	{
		p[2] = 3;
		p[3] = 2;
	}

	//find the first of the first 4 elements
	if(data[p[2]] < data[p[0]])
	{
		Swap(p[0],p[2]);
		Swap(p[1],p[3]);
	}

	//find the second of the first 4 elements
	if(data[p[2]] < data[p[1]])
	{
		Swap(p[1],p[2]);
	}

	//sort the first 4 elements
	if(data[p[3]] < data[p[2]])
	{
		Swap(p[2],p[3]);
	}
 
	//find third of the 5 elements
	if(data[4] < data[p[1]])
	{
		return data[p[1]];
	}
	else if(data[4] < data[p[2]])
	{
		return data[4];
	}
	else
	{
		return data[p[2]];
	} 							
}

void Print(const int a[])
{
	cout << "[" << a[0] << "," << a[1] << "," << a[2] << "," << a[3] << "," << a[4] << "]";
}
 
int main() 
{
	int data[5], md;

	for(int i = 0;i < 5;i += 1)
	{
		data[0] = i + 1;

		for(int j = 0;j < 5;j += 1)
		{
			if(j == i)
			{
				continue;
			}
			data[1] = j + 1;
		
			for(int k = 0;k < 5;k += 1)
			{
				if(k == j || k == i)
				{
					continue;
				}
				data[2] = k + 1;

				for(int l = 0;l < 5;l += 1)
				{
					if(l == k || l == j || l == i)
					{
						continue;
					}
					data[3] = l + 1;

					for(int m = 0;m < 5;m += 1)
					{
						if(m == l || m == k || m == j || m == i)
						{
							continue;
						}
						data[4] = m + 1;
						md = Median(data);
						Print(data);
						cout << " Median: " << md << "\n";
					}	
				}
			}
		}
	}				
	return 0;
}
