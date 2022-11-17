#include <stdio.h>
#include <stdlib.h> //to use malloc

// user defined data type
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newNode;

int main()
{
    int choice;
    head = NULL;

    // title
    printf("------------------\n");
    printf("-   Linked List  -\n");
    printf("------------------\n");

// insert new node operation
insert:
{
    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data you want to insert: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (head == NULL)
        head = temp = newNode;
    else
    {
        temp->next = newNode;
        temp = newNode;
    }
}

    // asking user to add new node to the linked list or not
    while (choice != 0)
    {
        printf("Do you want to add a New Node? (0 or 1) : ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1)
            goto insert;
        else
            printf("Invalid choice\n");
    }

    // traversing the linked list
    printf("\nTraversing Data : ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}