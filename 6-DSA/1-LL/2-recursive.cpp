#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    node *next; // <- Its is call as self referenctial structure. it carries the current addres.

    // It is a constructor . we can also make a function but constructor is a better choice.
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

int disp(node *head)
{
    if (head == NULL)
        return 0;
    else {
        printf("%d \t", head->data);
        return disp(head->next);
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    disp(head);
    return 0;
}
