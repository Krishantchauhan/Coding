#include <stdio.h>
#include <algorithm>

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

node *root = NULL;

// void r(int x)
// {
//     node *nn = new node(x);
//     if (root == NULL)
//         root = nn;
//     else
//     {
//         node *curr = root;
//         while (curr->right != NULL)
//             curr = curr->right;
//         curr->right = nn;
//     }
// }

// void l(int x)
// {
//     node *nn = new node(x);
//     if (root == NULL)
//         root = nn;
//     else
//     {
//         node *curr = root;
//         while (curr->left != NULL)
//             curr = curr->left;
//         curr->left = nn;
//     }
// }

void inorder(node *current)
{
    if (current == NULL)
        return;
    inorder(current->left);
    printf("%d ", current->data);
    inorder(current->right);
}

void dist(node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        printf("%d ", root->data);
    else
    {
        dist(root->left, k - 1);
        dist(root->right, k - 1);
    }
}

int main()
{
    root = new node(10);
    root->left = new node(20);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right = new node(30);
    root->right->right = new node(70);
    root->right->right->right = new node(80);
    dist(root, 2);
    // inorder(root);
}