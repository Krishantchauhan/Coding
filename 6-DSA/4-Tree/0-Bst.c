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

node *search(node *root, int key)
{
    if (root == NULL || root->data == key)
        return root;

    if (root->data > key)
        return search(root->left, key);

    return search(root->right, key);
}

node *min(node *root)
{
    if (root == NULL)
        return NULL;
    else if (root->left == NULL)
        return root;
    else
        return min(root->left);
}

node *deleteNode(node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }

        node *temp = min(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void leafNode(node *root, int *ct)
{
    if (root != NULL)
    {
        if (root->left == NULL && root->right == NULL)
            (*ct)++;
        leafNode(root->left, ct);
        leafNode(root->right, ct);
    }
}

void twoChildNode(node *root, int *ct)
{
    if (root != NULL)
    {
        if (root->left != NULL && root->right != NULL)
            (*ct)++;
        twoChildNode(root->left, ct);
        twoChildNode(root->right, ct);
    }
}

int countlft(node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;

    return 1 + countlft(root->left) + countlft(root->right);
}

int main()
{
    node *root = NULL;
    int leaf = 0, twoChild = 0;
    int choice, n, key;
    printf("\n\nKrishant Chauhan MCA 2A Roll no-32 \n");
    printf("Choice:\n 1-Insert\n 2-Search\n 3-Delete\n 4-Total Leaf Nodes\n 5-Ct Total Nodes with 2 Children\n 6-Count Nodes on Left Side\n 7-Exit\n\n");

    do
    {
        printf("ENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("ENTER THE NODE VALUE: ");
            scanf("%d", &n);
            root = insert(root, n);
            break;
        }
        case 2:
        {
            printf("Enter the value to search");
            scanf("%d", &key);
            node *result = search(root, key);
            if (result != NULL)
                printf("Value %d found\n", key);
            else
                printf("Value %d not found \n", key);
            break;
        }
        case 3:
        {
            printf("Enter the value to delete: ");
            scanf("%d", &key);
            root = deleteNode(root, key);
            printf("Node with value %d deleted \n", key);
            break;
        }
        case 4:
        {
            leafNode(root, &leaf);
            printf("Total No of Leaf Nodes are: %d\n", leaf);
            leaf = 0;
            break;
        }
        case 5:
        {
            twoChildNode(root, &twoChild);
            printf("Total No of Nodes with 2 children: %d\n", twoChild);
            twoChild = 0;
            break;
        }
        case 6:
        {
            int leftCount = countlft(root);
            printf("Total No of Nodes on the Left Side %d\n", leftCount);
            break;
        }
        case 7:
        {
            printf("Exit\n");
            break;
        }
        default:
        {
            printf("Invalid choice!\n");
            break;
        }
        }
    } while (choice != 7);

    return 0;
}
