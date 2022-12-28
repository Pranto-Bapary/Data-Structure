#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *temp;
int node_count = 0;

void create_node(int value)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL)
        head = temp = new_node;
    else
    {
        temp->next = new_node;
        temp = new_node;
    }

    node_count++;
    printf("Node Inserted Successfully\n");
}

void insertFirst(int value)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL)
        head = temp = new_node;
    else
    {
        new_node->next = head;
        head = new_node;
    }

    node_count++;
    printf("Node Inserted at First Position Successfully\n");
}

void insertLast(int value)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL)
        head = temp = new_node;
    else
    {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }

    node_count++;
    printf("Node Inserted at Last Position Successfully\n");
}

void insertSpecific(int value, int pos)
{
    struct node *new_node;
    int i = 1;
    if (pos > node_count)
    {
        printf("Invalid Position!!!\n");
        return;
    }
    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = value;
        new_node->next = NULL;

        if (head == NULL)
            head = temp = new_node;

        else
        {
            temp = head;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }

    node_count++;
    printf("Node Inserted at Specific Position Successfully\n");
}

void deleteFirst()
{
    if (head == NULL)
        printf("Can't delete\n");
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
    }

    printf("Deleted Successfully from First Position\n");
    node_count--;
}

void deleteLast()
{
    struct node *prev_node;
    temp = head;
    while (temp->next != NULL)
    {
        prev_node = temp;
        temp = temp->next;
    }
    if (temp == head)
        head = NULL;
    else
        prev_node->next = NULL;
    free(temp);
    printf("Deleted from Last Position Successfully\n");
    node_count--;
}

void deleteSpecific(int pos)
{
    int i = 1;
    struct node *next_node;
    temp = head;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    next_node = temp->next;
    temp->next = next_node->next;

    free(next_node);
    printf("Deleted Successfully\n");
    node_count--;
}

void traverse()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, data, pos;
    do
    {
        printf("-------------------------------\n");
        printf("   Linked List Implementation\n");
        printf("-------------------------------\n");

        printf("1. Create Node\n");
        printf("2. Insert at First\n");
        printf("3. Insert at Last\n");
        printf("4. Insert at Specific\n");
        printf("5. Delete at First\n");
        printf("6. Delete at Last\n");
        printf("7. Delete at Specific\n");
        printf("8. Traverse\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("cls");
            printf("Enter the Data: ");
            scanf("%d", &data);
            create_node(data);
            break;

        case 2:
            system("cls");
            printf("Enter the Data: ");
            scanf("%d", &data);
            insertFirst(data);
            break;

        case 3:
            system("cls");
            printf("Enter the Data: ");
            scanf("%d", &data);
            insertLast(data);
            break;

        case 4:
            system("cls");
            printf("Enter the Data: ");
            scanf("%d", &data);

            printf("Enter the Position: ");
            scanf("%d", &pos);

            insertSpecific(data, pos);
            break;

        case 5:
            system("cls");
            deleteFirst();
            break;

        case 6:
            system("cls");
            deleteLast();
            break;

        case 7:
            system("cls");
            printf("Enter the Position: ");
            scanf("%d", &pos);
            deleteSpecific(pos);
            break;

        case 8:
            system("cls");
            traverse();
            break;

        case 9:
            exit(1);

        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (choice != 9);

    return 0;
}