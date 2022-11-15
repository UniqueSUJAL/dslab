	#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a[100],i,j,n;
	double d=INFINITY;
	printf("ENTER THE NUMBER Of ELEMENTS::");
	scanf("%d",&n);
	printf("ENTER THE ARRAY ELEMENTS:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
	
		if(abs(a[i]-a[j])<d)
		{
			d=abs(a[i]-a[j]);
		}
	}
}
	printf("THE MINIMUM DIFFERENCE IS:%f",d);
}
                 

