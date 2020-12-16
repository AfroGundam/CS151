/*
1)
    //a. 
    void CA(int a[], int b)
    {
        for(int i = 0; i<b; i++)
        {
            a[i] = i + 1
        }
    }

    //b.
    double OPS(double a[], int b)
    {
        int temp = 0;
        for(int i=0; i<b; i++)
        {
            if(a[i]%2 != 0)
            {
                if(a[i] > 0)
                {
                    temp += a[i];
                }
            }
        }

        return temp;
    }

    //c.
    int MI(double a[], int b)
    {
        int temp = 999999;

        for(int i = 0; i < b; i++)
        {
            if(a[i] < temp)
            {
                temp = a[i];
            }
        }

        return temp;
    }

    //d.
    int RV(int a)
    {
        bool T = true;
        int x;
        while(T == true)
        {
            cout<<"Enter number"<<endl;
            cin>>x;
            
            if(abs(a-x)>5)
            {
                return x;
            }
        }
    }

    //e.
    /*
    bool UCW(string a)
    {
        for(size_t i=0;i<a.length();i++)
        {
            if(a[i] < 'A' || a[i] > 'Z')
            {
                return false;
            }
        }

        return true;
    }

2)
        char MaxOccurences(string a)
        {
            char alpha[26] {0};
            char x;
            for(int i=0; i<a.length();i++)
            {
                x = a[i];
                if(('a'<=x) && (x<='z'))
                {
                    alpha[x-'z']++;
                }
                else if(('A'<=x) && (x<='Z'))
                {
                    alpha[x-'A']++;
                }
            }
            int max = 0;
            for(int i= 0;i<26;i++)
            {
                if(alpha[i]>=alpha[max])
                {
                    max = i;
                }
            }
            return (max + 'a');
        }
3) 
    See Excel sheet

4)
    07 | bool IsFull(Stack* s)
    14 | return (s->size == 0);
    19 | return s->data[s->size - 1];
    26 | s->data[s->size] = v;
    33 | if(!IsEmpty(s))
    39 | void Palin(string& word)
    42 | Stack* v = new Stack();
    45 | for(;word[i]!='\0';i += 1)
    60 | delete v;

*/


