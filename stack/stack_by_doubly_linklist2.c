#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};
struct node* top = NULL;

void push(){

    struct node* new = (struct node*)malloc(sizeof(struct node));
    if (new == NULL){
        printf("Stack Overflow");
    } else {
        printf("Enter the element : ");
        scanf("%d", &new->data);
        
        if(top == NULL){
            new->next = NULL;
            new->prev = NULL;
            top = new;
        } else {
            new->next = NULL;
            new->prev = top;
            top = new;
        } 
        
    }
}

void pop(){
    struct node* ptr;
    if (top == NULL){
        printf("Stack is Empty.");
    } else if (top->prev == NULL){
        printf("\n Popped element is %d", top->data);
        top = NULL;
        
    } else {
        ptr = top;
        top = top->prev;
        top->next = NULL;
        printf("\n Popped element is %d",ptr->data);
        free(ptr);
    }
}

void peep(){
    if (top == NULL){
        printf("Stack has no element");
    } else {
    printf("Topmost element of stack is %d",top->data);
    }
}

void display(){
    struct node* temp = top;
    printf("Elements in stack : ");
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->prev;
    };
}

int main() {
    // Write C code here
    int choice;
    printf("1.Push\t 2.Pop\t 3.Peep\t 4.Display\t 5.Exit");
    while(1) { 
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch (choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peep();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
            default: printf("Invalid choice.");
        }
    };
    return 0;
}