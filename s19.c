#include<stdio.h>
void main()
{
	int i,n,k,s=0,arr[20];
	scanf("%d",&n);
	scanf("\n%d",&k);
	for(i=0;i<n;i++)
	  scanf("\n%d",&arr[i]);
	for(i=0;i<k;i++)
	{
		s=s+arr[i];
	}
	  printf("%d",s);
	
}
