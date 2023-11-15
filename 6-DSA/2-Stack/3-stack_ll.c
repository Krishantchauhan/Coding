#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

struct node *head = 0;
int size = 0;

void push()
{
    node *nn = (node *)malloc(sizeof(node));
    printf("Enter the data\n");
    scanf("%d", &nn->data);
    nn->next = head;
    head = nn;
    size++;
}

void pop()
{
    if (head == NULL)
        printf("UnderFlow\n");
    else
    {
        printf("POPED value is %d", head->data);
        node *temp = head;
        head = temp->next;
        free(temp);
        size--;
    }
}

void peek()
{
    printf("%d", head->data);
}

void disp()
{
    node *temp = head;
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int ch;
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