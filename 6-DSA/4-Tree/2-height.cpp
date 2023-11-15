#include <stdio.h>
#include<algorithm>

struct node
{
    node *left;
    node *right;
    int data;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(node* root){
    if(root==NULL)
        return 0;
    else
        return std::max(height(root->right),height(root->left) )+1;
}


int main(){

    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    int a;
    a=height(root);
    printf("%d ",a);

}