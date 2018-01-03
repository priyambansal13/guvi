#include <stdio.h>
 
int main(void) 
{
char n;
   scanf("%c",&n);
   if( (n>='a' && n<='z') || (n>='A' && n<='Z'))
   {
      printf("alphabet");
   }
  else 
  printf("no");
	return 0;
}
 
