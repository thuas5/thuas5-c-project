#include <stdio.h>
#include <math.h>
int main()
{
	int n[7];
	int i,j,sc,temp;
	for(i=0;i<7;i++)
	{
		scanf("%d",&n[i]);
 	}
 	printf("≈≈–Ú«∞:");
 	for(i=0;i<7;i++)
	{
		printf("%-4d",n[i]);
	}
	for(i=0;i<7-1;i++)
	{   sc=i;
		for(j=i+1;j<7;j++)
		{
         if(n[sc]>n[j]
		 )
         {
         	sc=j;
		 }
			
		}
		temp=n[i];
		n[i]=n[sc];
		n[sc]=temp;
	}
	printf("\n≈≈–Ú∫Û:");
	for(i=0;i<7;i++)
	{
		printf("%-4d",n[i]);
	}
}
