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
int search_node(struct node *, int);

int main()
{
    
    int no_nodes, search_data;
    struct node *head = NULL, *hptr;
    
    
    printf("Number of nodes you need\n");
    scanf("%d", &no_nodes);
    
    printf("enter data to search\n");
    scanf("%d", &search_data);
    
    hptr = create_list(head, no_nodes);
    display_list(hptr, no_nodes);
    
    if(search_node(hptr, search_data))
        printf("\ntrue");
    else
        printf("\nfalse");
    
    return 0;
    
}

int search_node(struct node *head, int search_data)
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        if(temp -> data == search_data)
            return 1;
        temp = temp -> next;
    }
    
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

void display_list(struct node *head, int no_nodes)
{
    
    struct node *temp, *last;
    //print a linked list
    printf("PRINTING LINKED LIST\n");
    temp = head;
    for(int i = 1; i <= no_nodes; i++)
    {
        
        printf("%d  ", temp -> data);
        temp = temp -> next;
        
    }
}
