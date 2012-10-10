/* Program to implement queue
Input : Choice, Elements
Output:Elements in queue
Date  :09/10/2012
 */

#include<stdio.h>

int queue[100];
int front=-1;
int rear=-1;
int size;

void main() {

    void insert(int);
    int delete();
    int number,choice,number1,i;

    printf("Enter the size:");
    scanf("%d",&size);

      printf(" \t MAIN MENU \n\t ..........\n 1.Add element to queue\n 2.Delete element from queue\n 3.Display\n 4.exit \n ");

    do {

        printf("Enter the choice:");
        scanf("%d",&choice);

        switch(choice)  {

            case 1:
                   printf("Enter the number:");
                   scanf("%d",&number);
                   insert(number);
                   break;

            case 2: 
                   number1=delete();
                   printf("Value returned from delete function is  %d ",number1);
                   break;

            case 3:
                   if(front>rear) {
                      
                       printf("\nQUEUE IS EMPTY\n ");
                  
                   }
                  
                   else {
                     
                       for(i=front;i<=rear;i++) {
                        
                           printf("%d\n",queue[i]);
                       
                       }

                   }
                   break;

            default: 
                    printf("Invalid Choice!!");
                    
    }                         
    } while(choice!=4);        
}               

void insert(int number) {

    if(rear==size)  {

        printf("\nQUEUE FULL\n");
        return;
    }

    else  {
       
        if (front==-1)      /*If queue is initially empty */
            front=0;
        rear++;
        queue[rear]=number;

    }
}

int delete() {

    int number2 ;
  
    if(front==rear) {

        printf("\n QUEUE EMPTY \n");
        return ;
    }

    else {

        number2=queue[front];
        front++;
    }
 
    if(front>rear) {

        front=rear=-1;

    }

    return(number2);

}

