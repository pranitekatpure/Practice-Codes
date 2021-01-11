
#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b) ((a) > (b)) ? (a) : (b)


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

int findHeight(struct BstNode *root)
{
    if (root == NULL)
        return;
    return MAX((findHeight(root -> left)), (findHeight(root -> right))) + 1;
}

int main(void)
{
    struct BstNode *root = NULL;
    int value = 10;
    root = Insert(root, 10);
    //root = Insert(root, 20);
    //root = Insert(root, 5);
    //root = Insert(root, 500);
    root = Insert(root, 30);
    printf("Inorder Traversal: \n");
    printInorder(root);
    int res = findHeight(root);
    printf("Height is:%d\n", res);
    printf("\n");
    return 0;
}



