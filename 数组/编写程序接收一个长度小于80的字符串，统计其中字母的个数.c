#include <stdio.h>
#include <string.h>
int main()
{
	int j;
char	f[100];
add(gets(f));
	printf("%d",j);
	
}
int add(int,a[100])
{
    char ar1[1000],ar2[1000],len,len2;
	int i,j=0,k=0,x=0;
    len=strlen(ar1);
    x=ssd();
for(i=0;i<len;i++)
{
	if(ar1[i]>=65&&ar1[i]<=90)
	{
		j++;
	}
	else if(ar1[i]>=97&&ar1[i]<=122)
	{
		x++;
	}
}
j+=x;
}
