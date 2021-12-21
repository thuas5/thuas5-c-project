#include <stdio.h>
#include <math.h>
#define n 10
int main()
{
  int w[n];
  int j=0,i=0;
   w[0]=0;
  w[1]=1;
  for(i=2;i<n;i++)
  {
  	w[i]=w[i-1]+w[i-2];//数值的对换 
  }
for(i=0;i<n;i++)
{
	printf("%d",w[i]);
}
}
