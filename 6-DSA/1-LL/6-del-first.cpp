#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next =NULL;
    }
};
node *head;

int disp(node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

void del(node* &head)
{
    if(head==NULL)
        head=NULL;
    node *temp = head;
    head = temp->next;
    free(temp);
}

// while(head!=NULL)
//     {
//         if(head->data == x)
//         {
//             head->next = head->next->next;
//         }
//         head=head->next;
//     }
//     return 0;

int main()
{
    head =new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    del(head);
    disp(head);
    return 0;
}