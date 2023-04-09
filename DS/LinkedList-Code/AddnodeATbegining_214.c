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

int main()
{
    
    int no_nodes;
    struct node *head = NULL, *hptr;
    
    
    printf("Number of nodes you need\n");
    scanf("%d", &no_nodes);
    
    hptr = create_list(head, no_nodes);
    display_list(hptr, no_nodes);
    
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
            last -> next = temp;
            last -> data = i;
            head = last;
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
    while(temp != NULL)
    {
        
        printf("%d  ", temp -> data);
        temp = temp -> next;
        
    }
}
