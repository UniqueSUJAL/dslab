                   #include<stdio.h>
int main()
{
	int a[100],n,i,p,e;
	printf("ENTER THE NO OF ELEMENTS:");
	scanf("%d",&n);
	printf("\nENTER THE ARRAY ELEMENTS:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER THE ELEMENT TO BE INSERTED");
	scanf("%d",&e);
	printf("\nENTER THE POSITION");
	scanf("%d",&p);
	n++;
	for(i=n;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=e;
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}

