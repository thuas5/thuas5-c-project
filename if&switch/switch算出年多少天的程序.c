
#include"stdio.h"
int main()
{
int n,y,r,n1,y1,r1,Y1=31,Y2=28,Y=30;
printf("=======================================================================================================================\n");
printf("=======================================����һ���������������ղ����һ���ж�����ĳ���==================================\n");
printf("======================================������������ո�һ�£��¿ո�һ�£��տո�һ�º�س�===============================\n");
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
		case 1:;printf("%d��",r);break;
		case 2:;printf("%d��",Y2+r);break;
		case 3:;printf("%d��",Y1+Y2+r);break;
	    case 4:;printf("%d��",Y1+Y2+Y1+r);break;
        case 5:;printf("%d��",Y1+Y2+Y1+Y+r);break;
        case 6:;printf("%d��",Y1+Y2+Y1+Y+Y1+r);break;
        case 7:;printf("%d��",Y1+Y2+Y1+Y+Y1+Y+r);break;
        case 8:;printf("%d��",Y1+Y2+Y1+Y+Y1+Y+Y1+r);break;
        case 9:;printf("%d��",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+r);break;
        case 10:;printf("%d��",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+Y+r);break;
        case 11:;printf("%d��",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+Y+Y1+r);break;
        case 12:;printf("%d��",Y1+Y2+Y1+Y+Y1+Y+Y1+Y1+Y+Y1+Y+r);break;
	}
}else
{
	printf("��������");
}
scanf("%d%d%d",&n,&y,&r);
printf("\n");
system("pause");
}
