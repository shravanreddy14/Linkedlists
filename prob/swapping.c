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

void Swapnodes( node* head)
{
     node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        swap(&temp->data, &temp->next->data);
        temp = temp->next->next;
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void print(node* head)
{
    node* temp=head;
    while(temp)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
node* head=NULL;
int main()
{
    int n,i,b;
    printf("enter no of elements");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        scanf("%d",&b);
        insert(&head,b);
    }
    Swapnodes(head);

    print(head);
}
