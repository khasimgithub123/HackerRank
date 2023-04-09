



//reverse the linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;

void insert_data(int value)
{
    struct node *var,*temp;
    temp=head;
    var=(struct node *)malloc(sizeof(struct node));
    var->data=value;
    if(head==NULL)
    {
        head=var;
        head->next=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        var->next=NULL;
        temp->next=var;
    }
}

void reverse_list()
{
    struct node *temp,*temp1,*var;
    temp=head;
    var=NULL;
    while(temp!=NULL)
    {
        temp1=var;
        var=temp;
        temp=temp->next;
        var->next=temp1;
    }
    head=var;
}

void display()
{
    struct node *var;
    var=head;
    printf("list of elements: \n");
    while(var!=NULL)
    {
        printf("-> %d ",var->data);
        var=var->next;
    }
}

int main()
{
     int i,value,n=1;
     char ch='y';
     head=NULL;
     printf("\tMenu");
     printf("\n-----------------------\n");
     printf(" 1. Insert node");
     printf("\n 2. Display the list of node");
     printf("\n 3. Reverse the nodes");
     printf("\n 4. Exit");
     //printf("\n-----------------------");
     while(ch=='y')
     {
          printf("\n\nChoose Operation: ");
          scanf("%d",&i);
          switch(i)
          {
               case 1 :
                    printf("\nEnter element in node %d: ",n);
                    scanf("%d",&value);
                    insert_data(value);
                    display();
                    n++;
               break;
               case 2 :
                    display();
               break;
               case 3 :
                    printf("\nReverse order ");
                    reverse_list();
                    display();
               break;
               case 4 :
                    exit(0);
               default:
                    printf("\nInvalid Operation!! Choose valid operation..");
               break;
          }
     }
     return 0;
}
