#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    
    int no_nodes;
    struct node *head = NULL;
    struct node *temp, *last;
    
    printf("Number of nodes you need\n");
    scanf("%d", &no_nodes);
    
    //create a linked list ;
    for(int i = 1; i <= no_nodes; i ++)
    {
        if(i == 1)
        {
            head = (struct node*)malloc(sizeof(struct node));
            head -> data = i;
            head -> next = NULL;
            temp = head;
        }
        else
        {
            last = (struct node*)malloc(sizeof(struct node));
            temp -> next = last;
            last -> data = i;
            last -> next = NULL;
            temp = last;
        }
    }
    
    //print a linked list
    printf("PRINTING LINKED LIST\n");
    temp = head;
    for(int i = 1; i <= no_nodes; i++)
    {
        
        printf("%d  ", temp -> data);
        temp = temp -> next;
        
    }
    
}
