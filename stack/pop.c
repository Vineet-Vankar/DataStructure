
#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is empty */
int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}

/* Check if the stack is full*/
int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

/* Function to delete from the stack */
int pop(){
   int data;
   if(isempty()) {
      printf("Stack Underflow");
   } else {
      data = stack[top];
      top = top - 1;
      return data;
   }
}

/* Function to insert into the stack */
int push(int data){
   if(isfull()) {
      printf("Could not insert data, Stack is full.\n");
   } else {
       top = top + 1;
       stack[top] = data;
   }
   return 0;
}

/* Main function */
int main(){
   int i;
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);
   
   int data = pop();
   printf("%d ",data);
   
   return 0;
}