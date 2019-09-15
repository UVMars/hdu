#include<stdio.h>
int main(){
    int a,i;
	while(scanf("%d",&a)!=EOF)
	{
		i=a/10;
		if(a==100)
            i=9;
        if(a<0)
            i=10;
		switch(i)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:printf("E\n");break;
			case 6:printf("D\n");break;
			case 7:printf("C\n");break;
			case 8:printf("B\n");break;
			case 9:printf("A\n");break;
		    default:printf("Score is error!\n");break;
		}
	}
	return 0;
}
