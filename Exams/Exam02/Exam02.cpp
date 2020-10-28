//Exam 02

/* 
Fundamentals
01

A)
if (x==y)
{
    cout<<"same";
}

B)
int Value( int a[], int x, char& c, char& h)

C)
void SwapIfGreater(double& x, double& y)
{
	if(x>y)
	{
		double temp;
		temp = x;
		x = y;
		y = temp;
	}

}

D)
string roman[] = {I,II,III,IV,V};

E)
int x,y;
x = n+1;
y = (x*x*x);





Problem Solving
02

string MonthName(int a)
{
    string Month;
    if (a>1 && a<12)
    {
        if a == 1)
        {
            Month = "January";
            return Month;
        }
        else if (a == 2)
        {
            Month = "February";
            return Month;
        }
        else if (a == 3)
        {
            Month = "March";
            return Month;
        }
        else if (a == 4)
        {
            Month = "April";
            return Month;        
        }
        else if (a == 5)
        {
            Month = "May";
            return Month;
        }
        else if (a == 6)
        {
            Month = "June";
            return Month;
        }
        else if (a == 7)
        {
            Month = "July";
            return Month;
        }
        else if (a == 8)
        {
            Month = "August";
            return Month;
        }
        else if (a == 9)
        {
            Month = "September";
            return Month;
        }
        else if (a == 10)
        {
            Month = "October";
            return Month;
        }
        else if (a == 11)
        {
            Month = "November";
            return Month;
        }
        else if (a == 12)
        {
            Month = "December";
            return Month;
        }
    }
    else
    {
        return "";
    }
}


Tracing
03
a | b | c | d | 
2 | 21| 9 | 17|
23|   |   |   |
  |  2|   |   |
21|   |   |   |
  | 11|   |   |
  |   |  2|   |
  |  9|   |   |
  |   | 28|   |
  |   |   | -9|
  |   |-37|   |

Debugging
04

014| a[i] = v + 1;
021| a[i] = a[j];
023| return ((a[i] + a[j]) / 2);
033| bool v[] = {x[i] == y[i],x[i+1] == y[i+1],x[i+2] == y[i+2]};
034| int c = 0;
069| cin>>nms[7];
073| }

*/
