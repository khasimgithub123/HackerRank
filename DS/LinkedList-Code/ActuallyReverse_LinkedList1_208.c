



//print the linked list actually reversing the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_list(struct node *, int);
void display_list(struct node *);
struct node* reverse_linkedlist(struct node*);


int main()
{
    struct node *head = NULL;
    int no_nodes, position, key;
    
    printf("No of nodes required\n");
    scanf("%d", &no_nodes);
    
    printf("create a linked list\n");
    head = create_list(head, no_nodes);
    
    printf("print linked list\n");
    display_list(head);
    
    
    //reverse print linked list without actually reversing
    head = reverse_linkedlist(head);
    printf("\nprint reversed linked list\n");
    display_list(head);
    
    
   return 1;
}

struct node* reverse_linkedlist(struct node *head)
{
    
    struct node *temp, *next_node, *last_node;
    
    temp = head;
    next_node = temp -> next;
    last_node = next_node -> next;
    
    while(next_node != NULL)
    {
       
        next_node -> next = temp;
        temp = next_node;
        next_node = last_node;
        if(last_node != NULL)
            last_node = last_node -> next;
    }
    head -> next = NULL;
    
    return temp;
}


struct node *create_list(struct node *head, int no_nodes)
{
    struct node *temp, *new;
    
    for(int i = 1; i <= no_nodes; i++)
    {
        if(head == NULL)
        {
            head = (struct node*)malloc(sizeof(struct node));
            temp = head;
            temp -> data = i;
            temp -> next = NULL;
        }
        else
        {
            new = (struct node*)malloc(sizeof(struct node));
            new -> data = i;
            new -> next = NULL;
            temp -> next = new;
            temp = new;
        }
    }
    
    return head;
}

void display_list(struct node *head)
{
    struct node *temp;
    
    temp = head;
    
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}


