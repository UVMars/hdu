#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int  m,n,k;
    while(cin>>m>>n){
        if(m>n){
            k=m;
            m=n;
            n=k;
        }
        int   sum1=0,sum2=0;
        for(int i=m;i<=n;i++){
        if(i%2==0)
            sum1+=i*i;
        else
            sum2+=i*i*i;
        }
        cout<<sum1<<" "<<sum2<<endl;
        }
return 0;
}
