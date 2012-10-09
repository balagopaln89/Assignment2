/* Program to implement bubble sort
   Input: size, elements
   Output: Sorted list of elements
   Date: 6/10/12
*/

#include<stdio.h>

 void main() {

 int array[50],size,i,j,temp;

 printf("Enter the size:\n");
 scanf("%d",&size);

 printf("Enter the elements:\n");
  for(i=0;i<size;i++) {
  scanf("%d",&array[i]);
    }
  
 for(i=0;i<size-1;i++) {
    for(j=i+1;j<size;j++){
        if(array[i]>array[j]) {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}

 printf("The sorted array is:\n");
 for(i=0;i<size;i++) {
  printf("%d\n",array[i]);
}
}
        
