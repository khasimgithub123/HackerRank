#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};

struct node* create_list(struct node *, int);
void display_list(struct node *, int);
void addnode_middle(struct node *, int);

int main()
{
    
    int no_nodes, position;
    struct node *head = NULL, *hptr;
    
    
    printf("Number of nodes you need\n");
    scanf("%d", &no_nodes);
    
    printf("Which position you want to add node\n");
    scanf("%d", &position);
    
    hptr = create_list(head, no_nodes);
    printf("\noriginal list \n");
    display_list(hptr, no_nodes);
    
    printf("\nafter adding node in middle\n");
    addnode_middle(hptr, position);
    display_list(hptr, no_nodes+1);
    
    return 0;
    
}


struct node* create_list(struct node *head, int no_nodes)
{
    struct node *temp, *last;
    
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
    
    return head;
    
}


void addnode_middle(struct node *head, int position)
{
    int i = 1;
    struct node *temp, *middle, *last;
    temp = head;
    while( i != position)
    {
        
        if(i == 1)
        {
            temp = head;
        }
        else
        {
            temp = temp -> next;
        }
        
        i++;
    }
    
    //add node at position
    last = temp -> next;
    middle = (struct node*)malloc(sizeof(struct node));
    middle -> data = 99;
    temp -> next = middle;
    middle -> next = last;
    
}


void display_list(struct node *head, int no_nodes)
{
    
    struct node *temp, *last;
    //print a linked list
    printf("PRINTING LINKED LIST\n");
    temp = head;
    while(temp != NULL)
    {
        
        printf("%d  ", temp -> data);
        temp = temp -> next;
        
    }
}
