#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;

void disp()
{
    node *temp = head;
    while (temp != 0)
    {
        printf("Data := %d\n", temp->data);
        temp = temp->next;
    }
}

void insert(int x)
{
    node *nn = (node *)malloc(sizeof(node));
    nn->data = x;
    nn->next = NULL;
    if (head == 0)
        head = nn;
    else
    {
        node *temp = head;
        while (temp->next != 0)
            temp = temp->next;
        temp->next = nn;
    }
}

int size()
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    // printf("\ntotal NUMBER of NOdes :- %d \n",count);
    return count;
}

void n_th_last(int x)
{
    node *temp = head;
    int count = size();

    if (x > count)
        printf("NOt POssible");
    else
    {
        int k = count - x + 1;
        for (int i = 1; i < k; i++)
            temp = temp->next;
        printf("%d", temp->data);
    }
}

int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    n_th_last(6);
    // disp();
}