#include<stdio.h>
void main()
{
  int n,j,i,k;
  long int a[1000],b[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%ld",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2!=0)
      printf("%ld ",a[i]);
    else
    {
      j=0;
      while(1)
      {
        b[j]=a[i];
        j++;
        i++;
        if(a[i]%2!=0||i==n)
         break;
      }
      for(k=j-1;k>=0;k--)
        printf("%ld ",b[k]);
      i--;
    }
  }
}

