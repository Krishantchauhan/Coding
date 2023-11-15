#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void disp(node *head)
{
    printf("\n");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void delend(node *&head)
{
    node *curr = head;

    if (head == NULL)
        printf("Linked List is Empty :(");
    if (head->next == NULL)
    {
        free(head->next);
        head = NULL;
        printf("Now Its Empty ");
    }
    else
    {
        while (curr->next->next != NULL)
            curr = curr->next;
        free(curr->next);
        curr->next = NULL;
    }
    // disp(head);
}

// Method 2
// storing previous node
void delend_2(node *&head)
{
    node *curr = head;
    node *p = head;
    if (head == NULL)
        printf("Linked List is Empty :(");
    else if (head->next == NULL)
    {
        free(head->next);
        head = NULL;
        printf("Now Its Empty ");
    }
    else
    {
        while (curr->next != NULL)
        {
            p = curr;
            curr = curr->next;
        }
        free(curr->next);
        p->next = NULL;
    }
    // disp(head);
}

void delend_sec(node *&head)
{
    node *curr = head;

    if (head == NULL)
        printf("Linked List is Empty :(");
    if (head->next == NULL)
    {
        free(head->next);
        head = NULL;
        printf("Now Its Empty ");
    }
    else
    {
        while (curr->next->next->next != NULL)
            curr = curr->next;
        node *temp = curr->next->next;
        free(curr->next);
        curr->next = temp;
    }
    // disp(head);
}

int main()
{

    node *head = NULL;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    // delend_2(head);
    delend_sec(head)
    disp(head);
}