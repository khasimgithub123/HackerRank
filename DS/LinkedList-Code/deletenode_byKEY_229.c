

//delete node with key found at begin or middle or end

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_list(struct node *, int);
void display_list(struct node *);
struct node *delete_key(struct node *, int );


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
    
    printf("\nenter key to be deleted\n");
    scanf("%d", &key);
    head = delete_key(head,key);
    
    printf("print linked list\n");
    display_list(head);
    
    return 1;
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


struct node *delete_key(struct node *head, int key)
{
    struct node *previous, *temp, *next_temp;
    
    temp = head;
    previous = temp;
    next_temp = temp;
    
    //delete node if found at beginning
    while(temp != NULL && temp -> data == key)
    {
        previous = temp;
        head = temp -> next;
        free(previous);
        temp = head;
    }
    
    previous = NULL;
    
    
    //it will take care of keys found at middle and end 
    while(temp != NULL)
    {
       
        
        if(temp -> data == key)
        {
            if(previous != NULL)
            {
                previous -> next = temp -> next;
            }
            
            free(temp);
            
            temp = previous -> next;
        }
        else
        {
            previous = temp;
            temp = temp -> next;
        }
      
    }
    
    return head;
    
}

