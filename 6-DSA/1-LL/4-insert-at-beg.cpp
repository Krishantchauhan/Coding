#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node *next;
    node(int x){
        data= x;
        next=NULL;
    }
};

int disp(node *head){
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    return 0;
}


node *beg(node *head,int f)
{
    node *temp=new node(f);
    temp->next=head;
    return temp;
}

int main()
{
    node *head=NULL;
    head =beg(head,20);
    // head =beg(head,30);
    // head =beg(head,40);
    disp(head);
    return 0;
}