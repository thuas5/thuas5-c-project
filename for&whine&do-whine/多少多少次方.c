#include <stdio.h>
#include <math.h>
int main()
{
int n,i,num,sum;
for(i=100;i<=999;i++)
{
num=i;
sum=0;
	while(num!=0)
{
	n=num%10;
	sum+=pow(n,3);
	num=num/10;
}
 if(i==sum)
 {
	printf("%-4d",i);
}
	}
}
