#include "hello.h"

void greetings(string x, string y)
{
    if(y.length() != 10)
    {
        cout<<"wrong input"<<endl;
    }
    else
    {
        if(y.substr(0,2)=="13")
        {
            cout<<"hello"<<x<<"from School of Computing.";
            cout<<"you are majoring in ";
// int z = static_cast<int>(y[3])-48;
            const char *p = y.substr(3,1).c_str();
            int z = atoi(p);
            switch (z)
            {
            case 1:
                cout<<"Informatics";
                break;
            case 2:
                cout<<"Computation Science";
                break;
            case 3:
                cout<<"Information Technology";
                break;
            default:
                cout<<"..., where again?";
            }
            cout<<endl;
            cout<<"and you're the ";
            string n = y.substr(6,4);
            if(n[3]=='1')
            {
                cout<<n<<"st";
            }
            else if(n[3]=='2')
            {
                cout<<n<<"nd";
            }
            else
            {
                cout<<n<<"th";
            }
            cout<<" student listed in this major"<<endl;
            cout<<"in "<<"20"+y.substr(4,2)<<endl;
        }
        else
        {
            cout<<"hello, you're not from school of Computing, "
                <<"are you?"<<endl;
        }
    }
}


void swap_1(int a, int b, int c)
{
    c = b;
    b = a;
    a = c * b++;
}

void swap_2(int a, int &b, int &c)
{
    c = b;
    b = a;
    a = c * b++;
}

void confused()
{
    int x1 = 5;
    int x2 = 5;
    int x3 = 5;

    int *pA;
    int *pB;
    int *pC;
    int *pD;
    int *pE;

    pA = &x1;
    pB = &x2;
    pC = pB;
    pD = pC;
    pE = pB;
    pB = &x3;
    *pD = 10;
    pC = &x1;
    *pE = x2 - *pA;
    cout<<"pA = "<<*pA <<", pB = "<<*pB <<", pC = "
        <<*pC <<", pD = "<<*pD <<", pE = "<<*pE<<endl;
}


void remove_inside(int x)
{
    cout<<"removing index "<<x<<endl;
    int arr[] = {4,6,7,9,4,6,8,4,2,2,5,8,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<endl;

    if(x>0&&x<n)
    {
        while(x<n)
        {
            arr[x++] = arr[x];
        }
        n--;
        for (int i = 0; i<n; i++)
        {
            cout<<arr[i]<<", ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"wrong input"<<endl;
    }
}

string indexing(double x, double y, double z)
{
    double t = x*.4 + y*.35 + z*.25;
    if (t > 80)
    {
        return "A";
    }
    if (t > 75)
    {
        return "AB";
    }
    if (t > 70)
    {
        return "B";
    }
    if (t > 60)
    {
        return "BC";
    }
    if (t > 50)
    {
        return "C";
    }
    if (t > 40)
    {
        return "D";
    }
    return "E";
}
