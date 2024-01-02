// Queue implementation in C using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node* front;
struct node* rear;

//enqueue function 
void Enqueue() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    
    if (rear == NULL) 
    {
        rear = front = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = rear->next;
    }
}

//dequeue function
void Dequeue() {
    struct node* temp = front;
    if (front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        front = front->next;
        free(temp);
        // free(rear);
    }
    else
    {
        front = front->next;
        free(temp);
    }
}

//display
void display() {
    struct node* temp = front;
    if (temp == NULL)
    {
        printf("No Element present in Queue\n");
    }
    else
    {
        printf("Elements in Queue : ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct node* front,rear,head;
    
    int choice;
    
    while(1) {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: Enqueue();
                    break;
            case 2: Dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid ");
        }
    }
}