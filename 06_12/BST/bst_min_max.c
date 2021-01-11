
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

int findMin(struct BstNode *root)
{
    struct BstNode *curr = root;
    if(root == NULL)
        return;
    while (curr -> left != NULL)
        curr = curr -> left;
    return curr -> data;
}

int findMax(struct BstNode *root)
{
    struct BstNode *curr = root;
    if(root == NULL)
        return;
    while (curr -> right != NULL)
        curr = curr -> right;
    return curr -> data;
}

int main(void)
{
    struct BstNode *root = NULL;
    int value = 10;
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 15);
    root = Insert(root, 500);
    root = Insert(root, 30);
    printf("Inorder Traversal: \n");
    printInorder(root);
    printf("\n");
    int res = findMin(root);
    printf("Minimum element in the TREE is: %d\n", res);
    int res1 = findMax(root);
    printf("Maximum element in the TREE is: %d\n", res1);
    return 0;
}


