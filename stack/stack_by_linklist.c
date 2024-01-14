#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
struct node *top = NULL;

void push();
void pop();
void peek();
void display();

int main() {

    int choice;
    
    while(1) {
        printf("\n1.Push\t 2.Pop\t 3.Peek\t 4.Display\t 5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:exit(0);
            default: printf("Invalid choice");
        }
    }

    return 0;
}

void push() {
    
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the element to insert : ");
    scanf("%d", &newnode->data);
    newnode->link = top;
    top = newnode;
}

void pop() {
    if (top == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        struct node *ptr = top;
        top = top->link;
        printf("Popped element is : %d", top->data);
        free(ptr);
    }
}

void peek() {
    if (top == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Topmost element is : %d", top->data);
    }
}

void display() {
    if (top == NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        struct node* temp = top;
        printf("Elements in stack : ");
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}
