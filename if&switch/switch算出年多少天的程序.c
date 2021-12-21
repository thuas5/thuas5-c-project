
#include"stdio.h"
int main()
{
int n,y,r,n1,y1,r1,Y1=31,Y2=28,Y=30;
printf("=======================================================================================================================\n");
printf("=======================================这是一个算你输人年月日并算出一共有多少天的程序==================================\n");
printf("======================================下面请输入年空格一下，月空格一下，日空格一下后回车===============================\n");
printf("=======================================================================================================================\n");
scanf("%d%d%d",&n,&y,&r) ;
if(n%4==0&&n%100!=0||n%400==0&&y>=3)
{
r++;
}
if(y<13) 
{
	switch(y)
	{
		case 1:;printf("%d天",r);break;
		case 2:;printf("%d天",Y2+r);break;
		case 3:;printf("%d天",Y1+Y2+r);break;
	    case 4:;printf("%d天",Y1+Y2+Y1+r);break;
        case 5:;printf("%d天",Y1+Y2+Y1+Y+r);break;
        case 6:;printf("%d天",Y1+Y2+Y1+Y+Y1+r);break;
        case 7:;printf("%d天",Y1+Y2+Y1+Y+Y1+Y+r);break;
        case 8:;printf("%d天",Y1+Y2+Y1+Y+Y1+Y+Y1+r);break;
        case 9:;printf("%d天",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+r);break;
        case 10:;printf("%d天",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+Y+r);break;
        case 11:;printf("%d天",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+Y+Y1+r);break;
        case 12:;printf("%d天",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+Y+Y1+Y+r);break;
	}
}else
{
	printf("输入有误");
}
scanf("%d%d%d",&n,&y,&r);
printf("\n");
system("pause");
}
