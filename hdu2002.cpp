#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#define PI 3.1415927
int main(){
    double r;
    while(scanf("%lf",&r)!=EOF)
    {
        printf("%.3lf\n",4*PI*r*r*r/3);

    }
         return 0;
}
