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

void middle(int x)
{
    node *curr = head;
    node *nn = (node *)malloc(sizeof(node));
    nn->data = x;
    nn->next = NULL;
    int count = 0;
    while (curr != 0)
    {
        count++;
        curr = curr->next;
    }

    curr = head;
    // for (int i = 1; i < count / 2; i++)
    //     curr = curr->next;
    count = count / 2;
    while (count--)
    {
        curr = curr->next;
    }

    nn->next = curr->next;
    curr->next = nn;
}

int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    // insert(50);

    middle(5);
    disp();
}