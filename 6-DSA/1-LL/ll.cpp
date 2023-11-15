#include <iostream>
using namespace std;

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
node *head = NULL;
void disp(node *head)
{
    while (head != NULL)
    {
        printf(" %d \t", head->data);
        head = head->next;
    }
    printf("\n");
}

void insertbeg(node *&head, int x)
{
    node *newnode = new node(x);
    if (head == NULL)
        head = newnode;
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void end(node *&head, int x)
{
    node *newnode = new node(x);
    node *curr = head;
    if (curr == NULL)
        head = newnode;
    else
    {
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = newnode;
    }
}

int size(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    printf("\ntotal NUMBER of NOdes :- %d \n", count);
    return count;
}

void delbeg(node *&head)
{
    if (head == NULL)
        printf("Empty LL");
    else
    {
        node *curr;
        curr = head;
        head = curr->next;
        free(curr);
    }
}

void delend(node *&head)
{
    node *curr = head;
    if (head == NULL)
        printf("Empty LL");
    else
    {
        while (curr->next->next != NULL)
            curr = curr->next;
        free(curr->next);
        curr->next = NULL;
    }
}

void insertpos(node *&head, int pos, int x, int count)
{
    node *newnode = new node(x);
    node *curr = head;
    if (pos == 1)
        insertbeg(head, x);
    int i = 1;
    curr = head;
    if (pos > count)
        printf("InValid Position\n");
    else
    {
        while (i < pos - 1)
        {
            curr = curr->next;
            i++;
        }
        newnode->next = curr->next;
        curr->next = newnode;
        printf("Successfull Incerted at %dth Position\n", pos);
    }
}

void append(int x)
{
    node *newnode = new node(x);
    if (head == NULL)
        head = newnode;
    else
    {
        node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    // disp(head);
}

// void rev(node *current, node *prev)
// {
//     if (current == NULL)
//         return;

//     if (current->next == head)
//     {
//         current->next = prev;
//         head = current;
//         return;
//     }

//     node *next = current->next;
//     current->next = prev;
//     rev(next, current);
// }

void reverse(node *curr, node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    reverse(curr->next, curr);
    curr->next = prev;
}

// 1 2 3 4
int main()
{
    // your code goes here
    // node* head=NULL;
    append(10);
    append(20);
    append(30);
    // append(40);
    // append(50);

    // head->next = new node(20);
    // head->next->next = new node(30);

    // // 	disp(head);

    // insertbeg(head, 5);
    reverse(head, NULL);
    disp(head);

    // end(head,15);
    // disp(head);
    // // 	size(head);

    // delbeg(head);
    // disp(head);

    // delend(head);
    // disp(head);

    // // 	size(head);
    int s;
    s = size(head);

    // insertpos(head,3,22,s);
    // disp(head);

    return 0;
}
