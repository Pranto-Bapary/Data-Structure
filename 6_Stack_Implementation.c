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
    if (top < 0)
        printf("Sorry!!!Stack is Empty\n");
    else
    {
        int popItem;
        popItem = stack[top];
        top--;
        printf("%d is Popped Out Successfully from the Stack\n", popItem);
    }
}

// Displays the top most Item
// Time Complexity O(1)
void peek()
{
    system("cls");
    if (top < 0)
        printf("Sorry!!!There is no Peek Item in the Stack\n");
    else
        printf("%d is the Peek Item\n", stack[top]);
}

// Display Items in the Stack
// Time Complexity O(n)
void display()
{
    system("cls");
    if (top < 0)
        printf("Sorry!!!There is no Items to Display\n");
    else
    {
        int i;
        printf("Items Present in the Stack: \n");
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
        printf("\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("------------------------\n");
        printf("- Stack Implementation -\n");
        printf("------------------------\n");

        printf("1. Push Item in the Stack\n");
        printf("2. Pop Item from the Stack\n");
        printf("3. Peek Item in the Stack\n");
        printf("4. Display Items from the Stack\n");
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