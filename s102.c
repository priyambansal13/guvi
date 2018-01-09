#include<stdio.h>
 
int main() {
   int arr[20], i, j, k, size,t;
   scanf("%d", &size);
 for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);
      
   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < size; k++) {
               arr[k] = arr[k + 1];
            }
            size--;
         } else
            j++;
      }
   }
   
	for(i=0;i<size;i++)
	{
		for(j=1;j<size;j++)
		{
			if(arr[j-1]<arr[j])
			{
				t=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=t;
			}
		}
	}
 
   for (i = 0; i < size; i++) {
      printf("%d", arr[i]);
   }
 
   return (0);
}
