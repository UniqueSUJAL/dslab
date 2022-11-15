#include<stdio.h>
int main()
{
    int a[100],i,j,l,s=0,f=0,n,m;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    printf("ENTER THE ARRAY OF REPEATING ELEMENT:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                l=a[i];
                printf("REPEATING ELEMENT=%d",l);
            }
        }}
}
