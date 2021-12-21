 #include <stdio.h>
 #define n 10
 int main()
 {
  	 int a[n],i,j,sum,s;
  	 for(i=0;i<n;i++)
  	 {
	   	scanf("%d",&a[i]);
	}
	 for(i=0;i<n;i++)
	{
	
		if(a[i]>a[i+1])
		{
			sum=a[i+1];
			a[i+1]=a[i];
			a[i]=sum;
		}
	
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
 }
