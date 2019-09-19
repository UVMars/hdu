#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

const int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
const int b[]={31,29,31,30,31,30,31,31,30,31,30,31};

int main(){
    int y,m,d;
    while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
    {
        int num=0;
        if(y%400==0||(y%100!=0&&y%4==0))
            {
            for(int i=0;i<m-1;i++)
                num+=b[i];
                }
        else
            {
                for(int i=0;i<m-1;i++)
                num+=a[i];
                }
        printf("%d\n",num+d);
    }

}
