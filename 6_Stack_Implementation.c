#include <stdio.h>  //to use printf() scanf()
#include <stdlib.h> //to Use the exit() function
#define maxSize 5   // Maximum Size of the Stack
int stack[maxSize]; // Using Array to Implement the Stack
int top = -1;       // Initially Set -1 that means No Elements Present in the Stack

// Push Items in the Stack
// Time Complexity O(1)
void push(int item)
{
    system("cls");
    if (top == maxSize - 1)
        printf("Stack is Full\n");
    else
    {
        top++;
        stack[top] = item;
        printf("%d is Pushed Successfully in the Stack\n", item);
    }
}

// Pop Item from the Stack
// Time Complexity O(1)
void pop()
{
    system("cls");
    int popItem;
    if (top == -1)
        printf("Stack is Empty\n");
    else
        popItem = stack[top];
    top--;
    printf("%d is Popped Out Successfully from the Stack\n", popItem);
}

// Displays the top most Item
// Time Complexity O(1)
void peek()
{
    system("cls");
    printf("%d is the Peek Item\n", stack[top]);
}

// Display Items in the Stack
// Time Complexity O(n)
void display()
{
    system("cls");
    int i;
    printf("Items Present in the Stack: \n");
    for (i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
    printf("\n");
}

int main()
{
    int choice;
    do
    {
        printf("What Do You Want?\n");
        printf("1. Push Item in the Stack\n");
        printf("2. Pop Item in the Stack\n");
        printf("3. Peek Items in the Stack\n");
        printf("4. Display Items in the Stack\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int item;
            printf("Enter the Item You Want to Push: ");
            scanf("%d", &item);
            push(item);
            break;
        }

        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            peek();
            break;
        }

        case 4:
        {
            display();
            break;
        }

        case 5:
            exit(1);

        default:
            printf("Invalid Choice\n");
        }
    } while (choice != 5);
    return 0;
}