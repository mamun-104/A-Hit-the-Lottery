#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int sum=0;
    while(1)
    {
        if(n>=100)
        {
            n=n-100;
            sum++;
        }

        else if(n>=20)
        {
            n=n-20;
            sum++;
        }
        else if(n>=10)
        {
            n=n-10;
            sum++;
        }
        else if(n>=5)
        {
            n=n-5;
            sum++;
        }
        else
        {
            n=n-1;
            sum++;

        }
        if(n==0){break;}
    }

    cout<<sum<<"\n";

    return 0;
}
