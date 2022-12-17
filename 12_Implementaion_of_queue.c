#include <stdio.h>
#include <stdlib.h>

#define maxSize 5
int queue[maxSize];

int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (rear == maxSize - 1)
    {
        printf("Sorry!!!Queue is full\n");
        return;
    }
    else if (front == -1)
    {
        front = 0;
        rear = rear + 1;
        queue[rear] = data;
    }
    else
    {
        rear = rear + 1;
        queue[rear] = data;
    }
    printf("%d is inserted successfully\n", data);
}

void dequeue()
{
    if (front == -1)
    {
        printf("Sorry!!!Queue is empty\n");
        return;
    }
    else
    {
        printf("%d is removed successfully\n", queue[front]);
        front = front + 1;
        if (front > rear)
            front = rear = -1;
    }
}

void traverse()
{
    if (front == -1)
    {
        printf("Sorry!!!Queue is empty\n");
        return;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}
int main()
{
    int choice, data;

    printf("----------------------------\n");
    printf("-   Queue Implementation   -\n");
    printf("----------------------------\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Traverse\n");
    printf("4. Exit\n");

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
            enqueue(data);
            break;
        }

        case 2:
        {
            dequeue();
            break;
        }

        case 3:
        {
            traverse();
            break;
        }

        case 4:
            exit(1);

        default:
            printf("Invalid choice!!!Please try again\n");
        }
    } while (choice != 4);

    return 0;
}