#include<stdio.h>
 
int main() {
   int arr[30], i, j, num, temp;
   scanf("%d", &num);
 
   
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }
 
   j = i - 1;   
   i = 0;       
 
   while (i < j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;          
      j--;          
   }
   for (i = 0; i < num; i++) {
      printf("%d->", arr[i]);
   }
 
   return (0);
}
