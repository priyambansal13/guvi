#include<stdio.h>
void main()
{
	int n ,i,k;
	long int result=1;
	
	scanf("%d",&n);
	scanf("%d",&k);
	if(n>0&&k>0)
	{
	
	for(i=1;i<=k;i++)
	{
		result*=n;
	}
	printf("%ld",result);
    }
    else
      printf("invalid input");
}
