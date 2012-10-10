/* Program to implement stack through Array
Input : Array of elements
Output: Array of elements after pop and push operation
Date  : 06/10/2012
 */
#include <stdio.h>
#include<ctype.h>

int stack[50];
int top=-1;   
int size;

void main() {
  int number,choice,number1,i;
  void push(int);
  int pop();
    

    printf("Enter the size:");
    scanf("%d",&size);

    printf(" \t MAIN MENU \n\t ..........\n 1.Add element to stack\n 2.Delete element from stack \n 3.Display\n 4.exit \n ");

    do {

        printf("Enter the choice:");
        scanf("%d",&choice);

        switch(choice)  {

            case 1:
                printf("Enter the number");
                scanf("%d",&number);
                push(number);
                break;

            case 2: 
                number1=pop();
                printf("Value returned from pop function is  %d ",number1);
                break;

            case 3:
                if(top==-1) {

                    printf("\nSTACK EMPTY\n ");
                }

                else {

                 printf("Elements in the list is:\n");   
                 for(i=top;i>=0;i--) {

                        printf("%d\n",stack[i]);

                    }
                }
                break;

            default: 
                printf("Invalid Choice\n");
                

        }                          

    } while(choice!=4);        

}               


void push(int number) {

    if(top==size-1)  {

        printf("STACK FULL\n");
        return;
    }

    else  {

        top++;
        stack[top]=number;

    }
}

int pop() {

    int number2 ;
    if(top==-1) {

        printf("STACK EMPTY \n");
        return 0;
    }

    else {

        number2=stack[top];
        top--;
    }
    return(number2);
}

