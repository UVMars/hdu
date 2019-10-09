#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    while (cin>>m>>n)
    {
        int x=0;
        int p[1000];
        for(int i=m; i<=n; i++)
        {
            int a=0,b=0,c=0,d;
            a=i/100;
            b=(i%100)/10;
            c=i%10;
            a=a*a*a;
            b=b*b*b;
            c=c*c*c;
            d=a+b+c;
            if(i==d)
            {
                p[x]=i;
                x++;
            }
        }
        if(!x)
            cout<<"no"<<endl;
        else
        {
            for(int t=0; t<x; t++)
            {
                cout<<p[t];
                if(t<x-1) cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
