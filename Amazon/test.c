#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;


};
struct node* newNode(int data);
int max(int a,int b);
int height(struct node* node);
struct node* newNode(int data)
{

  struct node* node=(struct node*)malloc(sizeof(struct node));
  node->data=data;
  node->left=NULL;
  node->right=NULL;
}
int max(int a,int b)
{
    return((a>=b)?a:b);

}
int height(struct node* node)
{
    if(node==NULL)
        return 0;
    return 1+max(height(node->left),height(node->right));

}
int diameter(struct node* tree)
{

    if(tree==NULL)
        return 0;
    int lHeight=height(tree->left);
    int rHeight=height(tree->right);
    int ldia=diameter(tree->left);
    int rdia=diameter(tree->right);
    return max(lHeight+rHeight+1,max(ldia,rdia));
}

int main()
{

    struct node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

printf("%d\n",height(root));
printf("%d\n",diameter(root));
}
