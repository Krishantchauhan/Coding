#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

int disp(node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}


//Using NOde 
// node *end(node *head,int x){
//     node *newnode = new node(x);
//     if(head ==NULL)
//         return newnode;
//     node *curr=head;
//     while (curr->next!=NULL)
//         curr=curr->next;
//     curr->next=newnode;
//     return head;    
// }

//Using INT
void end(node* &head,int x){
    node *newnode = new node(x);
    node *curr=head;
    if(head == NULL)
        head=newnode;
    else{
    while (curr->next!=NULL)
        curr=curr->next;
    curr->next=newnode;
    }
}


int main()
{
    node *head=NULL;
    // head=new node(10);
    // head =end(head,20);
    // head =end(head,30);
    // head =end(head,40);

    end(head,20);
    end(head,30);
    end(head,40);
    disp(head);
    return 0;
}