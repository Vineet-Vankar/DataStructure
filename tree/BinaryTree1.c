#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* root;

//function to create node
struct node* createnode() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to enter:");
    scanf("%d", &newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;
    
    return newnode;
}

//function to insert new node at leftmost part of tree
void Insertleft() {
    struct node* new = createnode();
    struct node *temp = root;
    if (root == NULL) {
        root = temp = new;
    } else {
    while (temp->left != NULL) {
        temp = temp->left;
    }
    temp->left = new;
    }
}

//function to insert new node at rightmost part of tree
void Insertright() {
    struct node* new = createnode();
    struct node *temp = root;
    if (root == NULL) {
        root = temp = new;
    } else {
    while (temp->right != NULL) {
        temp = temp->right;
    }
    temp->right = new;
    }
}

//function to display only leftmost elements
void displayleft() {
    struct node *ptr = root;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->left;
    }
}

//dunction to display only rightmost elements
void displayright() {
    struct node *ptr = root;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->right;
    }
}

int main() {
    
    int choice;
    
    while (1) {
        printf("\n1.InsertLeft 2.InsertRight 3.DisplayLeft 4.DisplayRight 5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: Insertleft();
                    break;
            case 2: Insertright();
                    break;
            case 3: displayleft();
                    break;
            case 4: displayright();
                    break;
            case 5: exit(0);
            default: printf("\nInvalid Choice\n");
        }
        
    }
    return 0;
}
