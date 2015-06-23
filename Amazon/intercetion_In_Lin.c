#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int interction(struct node *head1,struct node *head2)
{
    int n1,n2;
    struct node *c1=head1;
    struct node *c2=head2;
    while(c1!=NULL)
    {
        c1=c1->next;
        n1=c1;

    }
while(c2!=NULL)
    {
        c2=c2->next;
        n1=c2;

    }
if(c1==c2)
    return 1;
else
    return 0;
}
int main()
{

    struct node* newNode;
  struct node* head1 =
            (struct node*) malloc(sizeof(struct node));
  head1->data  = 10;

  struct node* head2 =
            (struct node*) malloc(sizeof(struct node));
  head2->data  = 3;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 6;
  head2->next = newNode;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 9;
  head2->next->next = newNode;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 15;
  head1->next = newNode;
  head2->next->next->next  = newNode;

  newNode = (struct node*) malloc (sizeof(struct node));
  newNode->data = 30;
  head1->next->next= newNode;

  head1->next->next->next = NULL;
printf("%d",interction(&head1,&head2));

}
