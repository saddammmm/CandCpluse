#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node *next;

};
struct node *newNode(int no)
{

 struct node *new_node=(struct node*)malloc(sizeof(struct node));
 new_node->data=no;
    new_node->next=NULL;
    return new_node;

}
void push(struct node **head_href,int data)
{
    struct node *new_node=newNode(data);
    new_node->next=*head_href;
    *head_href=new_node;

}
struct node *addTwoList(struct node *first,struct node *second)
{
    struct node *res;
    struct node *temp ,*prev=NULL;
    int sum,carry=0;
    while(first!=NULL||second!=NULL)
    {

        sum=carry+(first?first->data:0)+(second?second->data:0);
    carry = (sum >= 10)? 1 : 0;
        sum=sum%10;
        temp=newNode(sum);
        if(res==NULL)
            res=temp;
        else
            prev->next=temp;
            prev=temp;
            if(first)first=first->next;
            if(second)second=second->next;

    }
    if(carry>0)
        temp->next=newNode(carry);
    return res;

}
void printList(struct node *head)
{

    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
    printf("\n");
}
int  main()
{

    struct node *first=NULL;
    struct node *second=NULL;
    struct node *res=NULL;
     push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
    printf("First List is ");
    printList(first);

    // create second list 8->4
    push(&second, 4);
    push(&second, 8);
    printf("Second List is ");
    printList(second);

    // Add the two lists and see result
    res = addTwoList(first, second);
    printf("Resultant list is ");
    printList(res);

   return 0;
}
