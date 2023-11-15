#include <stdio.h>
int top = -1, arr[100], s, ch;

void push()
{

    if (top > s - 2)
        printf("Overflow \n");
    else
    {
        int data;
        printf("Enter the data ");
        scanf("%d", &data);
        top++;
        arr[top] = data;
    }
}

void pop()
{
    if (top <= -1)
        printf("Underflow\n");
    else
    {
        printf("POPed value is %d \n", arr[top]);
        top--;
    }
}

void peek()
{
    printf("The peek of stact is %d", arr[top]);
}

void disp()
{
    int i = top;
    while (i >= 0)
    {
        printf("\n%d\n", arr[i]);
        i--;
    }
    if (top == -1)
        printf("\n Empty stack\n");
}

int main()
{
    printf("\nEnter the size But Max is [100]\n");
    scanf("%d", &s);
    printf("\n1.Push\n");
    printf("\n2.pop\n");
    printf("\n3.Peek\n");
    printf("\n4.display\n");
    printf("\n5.exit\n");
    do
    {
        printf("\nEnter the choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case (1):
        {
            push();
            break;
        }
        case (2):
        {
            pop();
            break;
        }
        case (3):
        {
            peek();
            break;
        }
        case (4):
        {
            disp();
            break;
        }
        case (5):
        {
            printf("\n\t EXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
        }

    } while (ch != 5);
    return 0;
}