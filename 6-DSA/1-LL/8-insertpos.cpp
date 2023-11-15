#include<stdio.h>

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void disp(node* head){
    printf("\n");
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

int countfun(node* head){
    int i=1;
    while(head!=NULL){
        head=head->next;
        i++;
    }
    return i;
}

void insert(node* &head,int x,int pos){
    node* newnode = new node(x);
    node* curr = head;
    int i=1;
    int count = countfun(head);
    if(count<pos)
        printf("Not Possible");
    else{
        while(i++ < pos-1){
            // i++;
            curr=curr->next;
        }
        newnode->next=curr->next;
        curr->next=newnode;
    }
    disp(head);
}

int main()
{

    node* head=NULL;
    head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    insert(head,33,3);
}