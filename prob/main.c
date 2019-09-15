#include <stdio.h>
#include <stdlib.h>

typedef struct node{
int data;
struct node*next;
}node;

void insert(struct node** head,int data)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else{
        newnode->next=*head;
        *head=newnode;
    }
}
void inserinto(node** head,int ch)
{
    node* temp=*head;
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=ch;
    newnode->next=NULL;

    while(temp->data>ch)
    {
        if(temp->next->data<ch)
        {
            newnode->next=temp->next;
            temp->next=newnode;
        }
        temp=temp->next;
    }
}

void print(node* head)
{
    node* temp=head;
    while(temp)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
node* head=NULL;
int main()
{
    int n,i,b,a;
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        scanf("%d",&b);
        insert(&head,b);
    }
    if(n>0)
    {
        scanf("%d",&a);
        inserinto(&head,a);
    }
    print(head);
}
