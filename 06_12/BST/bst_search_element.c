
#include<stdio.h>
#include<stdlib.h>


struct BstNode
{
    int data;
    struct BstNode *left;
    struct BstNode *right;
};

struct BstNode* GetNewNode(int data)
{
    struct BstNode *newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

struct BstNode* Insert(struct BstNode *root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
    }

    else if(data <= root -> data)
    {
        root -> left = Insert(root -> left, data);
    }
    else
    {
        root -> right = Insert(root -> right, data);
    }
     return root;
}

void printInorder(struct BstNode *root)
{
    if (root == NULL)
        return;
    printInorder(root -> left);
    printf("%d -> ", root -> data);
    printInorder(root -> right);
}
void printPreorder(struct BstNode *root)
{
    if (root == NULL)
        return;
    printf("%d -> ", root -> data);
    printInorder(root -> left);
    printInorder(root -> right);
}

void printPostorder(struct BstNode *root)
{
    if (root == NULL)
        return;
    printInorder(root -> left);
    printInorder(root -> right);
    printf("%d -> ", root -> data);
}

int Search(struct BstNode *root, int value)
{
    int true = 1;
    int false = -1;
    if (root == NULL)
        return false;

    else if (root -> data == value)
        return true;

    else if (value <= root -> data)
        return Search(root -> left, value);

    else
        return Search(root -> right, value);
}

int main(void)
{
    struct BstNode *root = NULL;
    int value = 10;
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 15);
    root = Insert(root, 5);
    root = Insert(root, 30);
    printf("Inorder Traversal: \n");
    printInorder(root);
    int res = Search(root, value);
    printf("%d", res);
    return 0;
}

