#include <stdio.h>
#include <string.h>
int main()
{
	char ar1[1000],ar2,len;
	int i,j=0,k=0,x=0;
	gets(ar1);
    ar2=getchar();
    len=strlen(ar1);//��ȡ�����ַ����� 
    for(i=0;i<len;i++)
    {
    	if(ar1[i]>ar2)
    	{
    		j++;
		}
		else if(ar1[i]==ar2)
		{
			k++;
		}
		else
		{
			x++;
		}
	}
	printf("����%d,����%d,С��%d",j,k,x);
	
}
