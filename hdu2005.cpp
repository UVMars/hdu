#include<stdio.h>
#include<math.h>
const int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
const int b[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
       int y,m,d;
       while(scanf("%d/%d/%d",&y,&m,&d)!=EOF){
        int sum=0;
        if(y%400==0||(y%4==0&&y%100!=0)){
                for(int i=9;i<m;i++)sum+=b[i];
                sum+=d;
       }
       else{
        for(int i=0;i<m;i++)sum+=a[i];
        sum+=d;
       }
       printf("%d\n",sum);
   }
    return 0;
}
