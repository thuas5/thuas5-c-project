#include<stdio.h>

int main()
{
    int w[10];
    int i,j=9,gg;
    for(i=0;i<10;i++)
    {
    scanf("%d",&w[i]);
    }
    for(i=0;i<10;i++)
    {if(i<5){//ÎªÁË¹Ì¶¨ 
    gg=w[i];
    w[i]=w[j];
    w[j]=gg;
    j--;}
    }
    for(i=0;i<10;i++)
    {
    printf("%d",w[i]);
    }
    return 0;
}
