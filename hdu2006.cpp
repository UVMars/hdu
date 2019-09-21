#include<stdio.h>

int main()
{
	int n,b,m;
	while (scanf("%d",&n)!=EOF)
	{
		m=1;
		while(n--)
		{
			scanf("%d",&b);
			if(b&1)
			{
				m*=b;
			}
		}
		printf("%d\n",m);
	}
	return 0;
}
