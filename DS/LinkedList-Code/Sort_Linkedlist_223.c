




//sort linked list

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_list(struct node *, int);
void display_list(struct node *);
void sort_linkedlist(struct node*);


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
    
    
    //sort linked list
    sort_linkedlist(head);
    printf("\nprint sorted linked list\n");
    display_list(head);
    
    return 1;
}

void sort_linkedlist(struct node* head)
{
    struct node *temp, *next_node;
    int value;
    
    temp = head;
    while(temp -> next != NULL)
    {
        next_node = temp -> next;
        
        while(next_node != NULL)
        {
            if(temp -> data > next_node -> data)
            {
                value = temp -> data;
                temp -> data = next_node -> data;
                next_node -> data = value;
            }
            
            next_node = next_node -> next;
        }
        
        temp = temp -> next;
    }
}


struct node *create_list(struct node *head, int no_nodes)
{
    struct node *temp, *new;
    srand(time(NULL));
    
    for(int i = 1; i <= no_nodes; i++)
    {
        if(head == NULL)
        {
            head = (struct node*)malloc(sizeof(struct node));
            temp = head;
            temp -> data = rand()%100 + 1;
            temp -> next = NULL;
        }
        else
        {
            new = (struct node*)malloc(sizeof(struct node));
            new -> data = rand()%100 + 1;
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


