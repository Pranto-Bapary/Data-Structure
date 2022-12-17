#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *next;
};

struct node *head, *temp;
int node_count = 0;

void create_node(int data)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->item = data;
    new_node->next = NULL;

    if (head == NULL)
        head = temp = new_node;
    else
    {
        temp->next = new_node;
        temp = new_node;
    }

    node_count++;
    printf("Inserted Successfully\n");
}

void insertAtBeginning(int data)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->item = data;
    new_node->next = NULL;

    if (head == NULL)
        head = temp = new_node;
    else
    {
        new_node->next = head;
        head = new_node;
    }

    node_count++;
    printf("Inserted Successfully\n");
}

void insertAtEnd(int data)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));

    new_node->item = data;
    new_node->next = NULL;

    if (head == NULL)
        head = temp = new_node;
    temp = head;
    while (temp->next != 0)
        temp = temp->next;
    temp->next = new_node;

    node_count++;
    printf("Inserted Successfully\n");
}

void insertAtSpecific(int pos, int data)
{
    struct node *new_node;
    int i = 1;

    if (pos > node_count)
    {
        printf("Sorry Not Possible\n");
        return;
    }

    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->item = data;
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
    printf("Inserted Successfully\n");
}

void traverse()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->item);
        temp = temp->next;
    }
    printf("NULL\n");
    printf("Total Nodes: %d\n", node_count);
}

int main()
{
    int choice, data;

    printf("------------------------\n");
    printf("-      Linked List     -\n");
    printf("------------------------\n");
    printf("1. Create a Node\n");
    printf("2. Insert at Beginning\n");
    printf("3. Insert at Ending\n");
    printf("4. Insert at Specific Position\n");
    printf("5. Traverse Linked List\n");
    printf("6. Exit\n");

    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the data you want to insert: ");
            scanf("%d", &data);
            create_node(data);
            break;
        }

        case 2:
        {
            printf("Enter the data you want to insert: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        }

        case 3:
        {
            printf("Enter the data you want to insert: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        }

        case 4:
        {
            int pos;
            printf("Enter the position: ");
            scanf("%d", &pos);
            printf("Enter the data you want to insert: ");
            scanf("%d", &data);
            insertAtSpecific(pos, data);
            break;
        }

        case 5:
        {
            traverse();
            break;
        }

        case 6:
            exit(1);

        default:
            printf("Invalid choice!!!Please try again\n");
        }
    } while (choice != 6);

    return 0;
}