#include <stdio.h>
#include <math.h.>
float abb(float,float);
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=abb(a,b);
    printf("%f",c);
    return 0;
}
float abb(float x,float y)
{
float num=1;
int i=1;
while(i<=y)
{
num*=x;
++i;
}
return num;
}
