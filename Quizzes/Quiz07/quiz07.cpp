#include <iostream>
#include <string>
using namespace std;

struct Wallet
{
	unsigned int bills[6];
	unsigned int cents[4];
};

//start writing the definition below here

double CashAmount(Wallet& wt)
{
	double Ones, Fives, Tens, Twenties, Fifties, Hundreds, CashBills;
	double Pennies, Nickles, Dimes, Quarters, CashCents, CashTotal;
	for(int i=0; i<6; i++)
	{
		if(i == 0)
		{
			Ones = wt.bills[0];
		}
		else if(i==1)
		{
			Fives = 5.0 * wt.bills[1];
		}
		else if(i==2)
		{
			Tens = 10.0 * wt.bills[2];
		}
		else if(i==3)
		{
			Twenties = 20.0 * wt.bills[3];
		}
		else if(i==4)
		{
			Fifties = 50.0 * wt.bills[4];
		}
		else if(i==5)
		{
			Hundreds = 100.0 * wt.bills[5];
		}
	}

	CashBills = Ones + Fives + Tens + Twenties + Fifties + Hundreds;

	for(int i=0; i<6; i++)
	{
		if(i == 0)
		{
			Pennies = 0.01 * wt.cents[0];
		}
		else if(i==1)
		{
			Nickles = 0.05 * wt.cents[1];
		}
		else if(i==2)
		{
			Dimes = 0.10 * wt.cents[2];
		}
		else if(i==3)
		{
			Quarters = 0.25 * wt.cents[3];
		}
	}

	CashCents = Pennies + Nickles + Dimes + Quarters;
	CashTotal = CashBills + CashCents;
	return CashTotal;
}

int main()
{
	int bills = 6;
	int cents = 4;
	int a[6], b[4];
	Wallet W;
	cout<<"How many bills of each type?"<<endl;
	for(int i=0; i<bills ; i++)
	{
		cin>>W.bills[i];
	}
	cout<<"How many cents of each type?"<<endl;
	for(int i=0; i<cents ; i++)
	{
		cin>>W.cents[i];
	}

	cout<<CashAmount(W);

	return 0;
}
