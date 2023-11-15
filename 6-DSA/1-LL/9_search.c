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

void search(int key)
{
    node *temp = head;
    int count = 0;
    int flag = 0;
    while (temp != 0)
    {
        count++;
        if (temp->data == key)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if (flag == 1)
        printf("Data is present at %d", count);
    else
        printf("Data not found\n");
}

int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    disp();
    search(10);
}