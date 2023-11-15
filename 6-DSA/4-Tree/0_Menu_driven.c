#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left, *right;
} node;

node *insert(node *root, int x)
{
    if (root == NULL)
    {
        node *nn = (node *)malloc(sizeof(node));
        nn->left = nn->right = NULL;
        nn->data = x;
        return nn;
    }
    else if (root->data > x)
        root->left = insert(root->left, x);
    else if (root->data < x)
        root->right = insert(root->right, x);
    return root;
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}

void preorder(node *root)
{
    if (root == NULL)
        return;

    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct node *root = NULL;

    int n, choice;
    do
    {
        printf("ENTER CHOICE,1,2,3,4,5:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("ENTER THE NODE VALUE:");
            scanf("%d", &n);
            root = insert(root, n);
            break;
        }
        case 2:
        {
            inorder(root);
            break;
        }
        case 3:
        {
            preorder(root);
            break;
        }
        case 4:
        {
            postorder(root);
            break;
        }
        case 5:
        {
            return 0;
            break;
        }
        }
    } while (choice != 5);
}
