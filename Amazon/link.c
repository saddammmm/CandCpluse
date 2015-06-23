#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert_beg(struct node **head,int new_data)
{

    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
}
void insertAfter(struct node *prev,int new_data)
{
    if(prev==NULL)
    {
        printf("prev can not be NULL");
        return;

    }
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=prev->next;
    prev->next=new_node;
}
void insert_at_end(struct node **head,int new_data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    struct node *last=*head;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        return;
    }
    while(last->next!=NULL)
    {

        last=last->next;
        last->next=new_node;return;
    }
}
void insert_at_given_position(int pos,int data)
{



}
int getCount(struct node *head)
{

    if(head==NULL)
        return 0;
    return 1+getCount(head->next);
}
void printList(struct node *head)
{

    while(head!=NULL)
    {

        printf("%d\t",head->data);
        head=head->next;
    }
}
void Delete(struct node **head,int key)
{
    struct node *temp=*head,*prev;
    if(temp!=NULL&&temp->data==key)
    {
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key)
    {

        prev=temp;
        temp=temp->next;

    }
    if(temp==NULL)
        return;
    prev->next=temp->next;
    free(temp);

}
int main()
{
    struct node *head=NULL;
   insert_at_end(&head,6);
   insert_beg(&head,8);
   insert_at_end(&head,78956);
   insertAfter(head->next,75);
   printList(head);
   printf("\n%d",getCount(head));
   Delete(&head,75);
    printf("\n%d",getCount(head));
    printList(head);
   return 0;

}
