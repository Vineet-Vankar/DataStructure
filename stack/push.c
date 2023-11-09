#include <stdio.h>
int MAXSIZE = 5;
int stack[5];
int top = -1;

    /* Check if the stack is full*/
    int isfull(){
       if(top == MAXSIZE)
          return 1;
       else
          return 0;
    }

/* Function to insert into the stack */
int push(int data){
   if(isfull()) {
      printf("Stack Overflow \n");
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
   push(82);
   push(2);

   return 0;
}