/* Program to implement insertion sort
Input :  Size, Elements
Output: Sorted array
Date  : 06/10/2012
*/

#include<stdio.h>

void main() {

 int size,array[50],i,j,temp;

 printf("Enter the size:");
 scanf("%d",&size);

  printf("Enter the elements:\n");
  for(i=0;i<size;i++) {
    scanf("%d",&array[i]);
}
  for (i=1;i<size;i++)  {
   temp = array[i];
      j = i-1;

    while ((array[j])>temp) {
     array[j+1] = array[j ];
    j--;
        }

        array[j+1] = temp;
    }

    printf("Elements in the sorted form is:\n");

    for(i=0;i<size;i++) {
    printf("%d\n",array[i]);
 }
}
