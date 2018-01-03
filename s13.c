#include <stdio.h>
 
int main(void) 
{
char n;
   scanf("%c",&n);
   if( (n>='a' && n<='z') || (n>='A' && n<='Z'))
   {
   
   if(n=='A'||n=='a'||n=='E'||n=='e'||n=='I'||n=='i'||n=='O'||n=='o'||n=='U'||n=='u')
   {
     printf("vowel");
   }
   else
      printf("consonant");
  }
  else 
  printf("invalid input");
	return 0;
}
 
