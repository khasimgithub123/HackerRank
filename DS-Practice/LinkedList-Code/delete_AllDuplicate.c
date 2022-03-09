/**
 * C program to delete all nodes by given key in Singly Linked List.
 */
 
//delete all duplicate nodes

#include <stdio.h>
#include <stdlib.h>

/* Node structure */
struct node
{
    int data;          // Data
    struct node *next; // Address
} * head;


/* Function declaration */
void createList(int n);
int  deleteAllByKey(int key);
void displayList();


int main()
{
    int n, key, totalDeleted;

    // Input node count to create
    printf("Enter number of node to create: ");
    scanf("%d", &n);

    createList(n);

    // Display list
    printf("\nData in list before deletion\n");
    displayList();

    printf("\nEnter element to delete with key: ");
    scanf("%d", &key);


    totalDeleted = deleteAllByKey(key);
    printf("%d elements deleted with key %d.\n", totalDeleted, key);


    // Print final list
    printf("\nData in list after deletion\n");
    displayList();

    return 0;
}

/**
 * Create a list of n nodes
 */
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = malloc(sizeof(struct node));

    /*
     * Unable to allocate memory, hence exit from app.
     */
    if (head == NULL)
    {
        printf("Unable to allocate memory. Exiting from app.");
        exit(0);
    }
    

    /* Input head node data from user */
    printf("Enter data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL

    temp = head;

    /*
     * Create n nodes and add to the list
     */
    for (i = 2; i <= n; i++)
    {
        newNode = malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if (newNode == NULL)
        {
            printf("Unable to allocate memory. Exiting from app.");
            exit(0);
        }

        printf("Enter data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // The newNode should point to nothing

        temp->next = newNode; // Link previous node i.e. temp to the newNode
        temp = temp->next;
    }
    
}


/**
 * Display entire list
 */
void displayList()
{
    struct node *temp;

    /*
     * If the list is empty i.e. head = NULL,
     * dont perform any action and return.
     */
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);     // Print data of current node
        temp = temp->next;              // Move to next node
    }
    printf("\n");
}


/**
 * Delete all nodes having data as given key.
 */
int deleteAllByKey(int key)
{
    int totalDeleted = 0;
    struct node *prev, *cur;

    /* Check if head node contains key */
    while (head != NULL && head->data == key)
    {
        // Get reference of head node
        prev = head;

        // Adjust head node link
        head = head->next;

        // Delete prev since it contains reference to head node
        free(prev);

        totalDeleted++;
    }

    prev = NULL;
    cur  = head;

    /* For each node in the list */
    while (cur != NULL)
    {
        // Current node contains key
        if (cur->data == key)
        {
            // Adjust links for previous node
            if (prev != NULL) 
            {
                prev->next = cur->next;
            }

            // Delete current node
            free(cur);

            cur = prev->next;

            totalDeleted++;
        } 
        else
        {
            prev = cur;
            cur = cur->next;
        }        

    }

    return totalDeleted;
}

