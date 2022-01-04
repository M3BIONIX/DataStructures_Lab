#include<stdio.h>
#include<stdlib.h>
#define size 5
int isempty(int top);
int pop(int top);
void push(int item, int top);
int isfull(int top);
int stack[size], top =0;
 int a,choice; 
void display(int top);
void main()

{
  
  
do
{
  printf("Enter your Choice \n 1. Push Elements \n 2. Pop Elemennt \n 3. Peek @ top \n 4.Display \n 5.Exit \n");  
  scanf("%d",&choice);

if( choice == 1)
{
 printf("\n\nEnter the element to be pushed to the stack : "); 
    scanf("%d",&a);       
    push(a,top);
}
else if( choice == 2)
 printf("%d popped",pop(top));
else if(choice == 3)
 printf("%d",stack[top - 1]);
else if( choice == 4)
 { 
   display(top);
 }
else if(choice == 5)
 exit(0);
}while( choice > 0);
}   
   int isempty(int top)
 {
    if(top == 0)
     return 1;
    else
     return 0;
 }

 int isfull(int top)
 { 
    if(top == sizeof(stack)/4)
     return 1;
    else
     return 0;
 }


 void push(int item, int top)
  {
    if(isfull(top))
      printf("Stack is full \n");
 
    else
     { 
       stack[top] = item;
       top++;
     } 
  }

 int pop(int top)
  {
    
    if(isempty(top))
      printf("Stack is empty");
    else
     {
       top = top -1;
      int item = stack[top];
       return item;
     }
   }

 void display(int top)
{
for(int i =0; i < top; i++)
    printf("%d ",stack[i]);
    printf("\n");
}
