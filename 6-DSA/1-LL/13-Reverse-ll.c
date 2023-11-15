#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head = 0;

void disp()
{
    Node *temp = head;
    while (temp != 0)
    {
        printf("%d -->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void append(int x)
{
    Node *nn = (Node *)malloc(sizeof(Node));
    nn->next = 0;
    nn->data = x;
    if (head == 0)
        head = nn;
    else
    {
        Node *temp = head;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = nn;
    }
}

void reverse()
{
    Node *curr = head;
    head = 0;

    while (curr != 0)
    {
        Node *temp = curr->next;
        curr->next = head;
        head = curr;
        curr = temp;
    }
}

int main()
{

    append(10);
    append(20);
    append(30);
    append(40);
    append(50);

    disp();
    reverse();
    disp();

    return 0;
}