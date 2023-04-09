// delete node from begin, end, middle

//create a linked list
//delete node from begin, end, middle


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create_list(struct node *, int);
void display_list(struct node *);
struct node* delete_node_begin(struct node *);
void delete_node_end(struct node *);
void delete_node_middle(struct node *, int);

int main()
{
    struct node *head = NULL;
    int no_nodes, position;
    
    printf("No of nodes required\n");
    scanf("%d", &no_nodes);
    
    printf("create a linked list\n");
    head = create_list(head, no_nodes);
    
    printf("print linked list\n");
    display_list(head);
    
    printf("\ndelete node from beginning\n");
    head = delete_node_begin(head);
    
    printf("print linked list after deleting begin\n");
    display_list(head);
    
    printf("\ndelete node from end\n");
    delete_node_end(head);
    
    printf("print linked list after deleting end\n");
    display_list(head);
    
    printf("\ndelete node from middle\n");
    printf("enter node to be deleted:\n");
    scanf("%d", &position);
    delete_node_middle(head,position);
    
    printf("print linked list after deleting middle\n");
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

struct node* delete_node_begin(struct node *head)
{
    struct node *first, *second;
    first = head;
    second = first -> next;
    
    head = second;
    free(first);
    
    return head;
}

void delete_node_end(struct node *head)
{
    struct  node *temp, *last, *middle;
    
    last = head;
    while(last != NULL)
    {
        
        middle = last -> next;
        if(middle != NULL)
        {
            temp = last;
        }
        else if(middle == NULL)
        {
            break;
        }
        last = middle;
        
    }
    
    temp -> next = NULL;
    
    free(last);
}

void delete_node_middle(struct node *head, int position)
{
    struct node *temp, *previous;
    int i = 2;
    temp = head;
    
    while(i != position)
    {
        previous = temp;
        temp = temp -> next;
        
        i++;
    }
    
    //temp is pointing to node to be deleted
    previous -> next = temp -> next;
    free(temp);
}

