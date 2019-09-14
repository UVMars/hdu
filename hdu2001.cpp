#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,x,y,s;
    while(cin>>a>>b>>c>>d){
        x=a-c;
        y=b-d;
        s=sqrt(x*x+y*y);
        printf("%.2lf\n",s);
    }
    return 0;
}
