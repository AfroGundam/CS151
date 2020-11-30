
int M(int a, int b, int c)
{
	int temp;

	if(a>b)//a>b
	{
		if(b>c)//a>b>c
		{
			return b;
		}
		else
		{
			if (c>a)
			{
				return a;
			}
			else
			{
				return c;
			}
		}
		
	}
	else//b>a
	{
		if(c>b)//c>b>a
		{
			return b;
		}
		else
		{
			if (c>a)//b>c>a
			{
				return c;
			}
			else
			{
				return a;
			}
			
		}
		
	}
	
}

bool x = true;
while(x == true)
{
	cout<<"I Can Do This"<<endl;
}

bool T(int& B)
{
	if(B%6)
	{
		B *= 3;
		return true;
	}
	else
	{
		B = B/2
		return false;
	}
}

for(int i = 100; i>0; i--)
{
	if(i%7)
	{
		cout<<i<<endl;
	}
}

double A(double L)
{
	double numb, ans;	
	cout<<"Enter your number"<<endl;
	cin>>numb;
	ans = (L+numb)/2
	cout<<ans<<endl
}

void TimesTable(int a)
{
	if(a > 0 && a <= 833)
	{
		for(int j = 0; j < a; j++)
		{
			for(int i = 1; i <= 12; ++i) 
			{
				int temp;
				temp = j*i;
				if(temp <10)
				{
					cout<<"000"<<temp<<"  "; 
				}
				else if (temp <100)
				{
					cout<<"00"<<temp<<"  "; 
				}
				else if (temp <1000)
				{
					cout<<"0"<<temp<<"  "; 
				}
				else
				{
					cout<<temp<<"  "; 
				}				
				cout<<endl;
			}
		}
	}
}



	n	s	t	i	j	return 
01  4
02  		1
03				2
04		3
05					2
06		5
07			6
08					3
09				3			
10		4	
11		7
12			14
13					4
14				4
15		5
16		9
17			23
18						23


03 | int c = 0;
10 | return c;
13 | bool IP(int p)
15 | for(int i = 2; pow(i,2) < p; i+=1)
22 | return true;
32 | if(IP(p)&&(m%p == 0) )
35 | cout<<p<<" "<<c;
