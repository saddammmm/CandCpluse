#include<stdio.h>
#include<stdlib.h>
void printArray(int [], int);
//void printPathsRecur(struct node*, int [], int);
struct node* newNode(int );
void printPaths(struct node*);
struct node
{

    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{

   struct node *nd=(struct node*)malloc(sizeof(struct node));
   nd->data=data;
   nd->left=NULL;
   nd->right=NULL;
   return nd;
}
void printPaths(struct node* nd)
{

    int path[1000];
    printPathsRecur(nd,path,0);

}
void printPathsRecur(struct node* nd,int path[],int pathLength)
{

    if(nd==NULL)
        return
        path[pathLength]=nd->data;
    pathLength++;
    if(nd->left==NULL&&nd->right==NULL)
    {

        printArray(path,pathLength);
    }
    else
    {

        printPathsRecur(nd->left,path,pathLength);
        printPathsRecur(nd->right,path,pathLength);
    }
}
void printArray(int a[],int len)
{

    int i;
    for(i=0;i<len;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{

    struct node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    printPaths(root);
    getchar();
   // return 0;
}
