#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    node *next; // <- Its is call as self referenctial structure. it carries the current addres.

    //It is a constructor . we can also make a function but constructor is a better choice.
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

int disp(node *head){
    node *curr = head;
    while (curr!=NULL)
    {
        printf("%d \t",curr->data);
        curr=curr->next;
    }
    return 0;   
}

 int main()
 {
   node *head=new node(10);
   head->next=new node(20);
   head->next->next=new node(30);
   disp(head);
   return 0;
}




//  int main()
//  {
//    node *head=new node(10);
//    node *temp1=new node(20);
//    node *temp2=new node(30);

//    head->next=temp1;
//    temp1->next=temp2;
//    return 0;
//   }
