#include <stdio.h>
#include <ctype.h>
#define maxSize 50

int stack[maxSize];
int top = -1;

void push(char item)
{
    top++;
    stack[top] = item;
}

char pop()
{
    char popItem;
    popItem = stack[top];
    top--;
    return popItem;
}

int priority(char item)
{

    if (item == '^')
        return 3;

    else if (item == '/' || item == '*')
        return 2;

    else if (item == '+' || item == '-')
        return 1;

    else if (item == '(')
        return 0;

    else
        return 0;
}
int main()
{
    char expression[100];
    char *exp;
    char popItem;

    printf("Enter the Expression: ");
    gets(expression);

    exp = expression;
    printf("Output: ");

    while (*exp != '\0')
    {
        if (isalnum(*exp))
            printf("%c ", *exp);

        else if (*exp == '(')
            push(*exp);

        else if (*exp == ')')
        {
            while ((popItem = pop()) != '(')
            {
                printf("%c ", popItem);
            }
        }

        else
        {
            while (priority(stack[top]) >= priority(*exp))
            {
                printf("%c ", pop());
            }
            push(*exp);
        }
        exp++;
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
}
