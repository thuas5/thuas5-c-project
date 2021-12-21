#include <stdio.h>
#include <math.h>
int main()
{int i,j,x=0;
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			x=100-i-j;
			if(5*i+3*j==100&&x%3==0)
			{
				printf("¹«¼¦%dÄ¸¼¦%dÐ¡¼¦%d\n",i,j,x);
			}
		}
	}
}
