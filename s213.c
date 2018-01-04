#include <stdio.h>
void main()
{
    int n, i, flag = 1;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

    if (flag==1)
        printf("%d ",n);
    else
        printf("%d",n);
    
    return 0;
}
