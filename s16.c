
#include <stdio.h>
#include <stdbool.h>
 
bool checkYear(int year)
{
    
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
 

int main()
{
	int n;
    scanf("%d",&n);
    if(n>0)
    {
	
    checkYear(n)? printf("yes"):
                   printf("no");
    }
    else 
       printf("invalid input");
    return 0;
}
