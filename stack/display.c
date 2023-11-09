#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is full */
int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

/* Function to display elements in the stack */
void display(){
   if (top == -1){
       printf("stack is empty");
       return;
   } 
   for (int i=top; i>=0; i--){
       printf("%d ", stack[i]);
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
}

/* Main function */
int main(){
   int i;
   push(10);
   push(44);
   push(62);

   display();
   return 0;
}