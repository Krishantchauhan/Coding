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

int disp(node *head)
{
    while (head != NULL)
    {
        printf("%d \t", head->data);
        head = head->next;
    }
    return 0;
}
int search(node *head, int ele)
{
    node *curr = head;
    int count = 1;
    while (curr != NULL)
    {
        if (curr->data == ele)
        {
            printf("Data is present %d at pos %d\n", curr->data, count);
            curr = curr->next;
        }
        else
        {
            count++;
            curr = curr->next;
        }
    }
    return -1;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    disp(head);
    int ele;
    ele = 50;
    search(head, ele);
}