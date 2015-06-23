#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;

};
typedef struct node nd;
void append(nd **head_ref,int data)
{
    nd *new;
    new=(nd *)malloc(sizeof(nd));
    nd *last=*head_ref;
    new->data=data;
    new->next=NULL;
    if(*head_ref=NULL)
    {

        *head_ref=new;
        return;
    }
    while(last->next!=NULL)
    {

        last=last->next;
        last->next=new;
        return;
    }


}
void print(nd *node)
{

    while(node!=NULL)
    {

        printf("%d",node->data);
        node=node->next;
    }
}
int main()
{
    nd *head=NULL;
    append(&head,6);

    print(head);
    return 0;
    getch();

}
