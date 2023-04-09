
# Implement BST using iterative technique

/*  C Program for Insertion in Binary Search Tree without Recursion  */

#include<stdio.h>
#include<stdlib.h>
#define MAX 50

struct node
{
        struct node *lchild;
        int info;
        struct node *rchild;
};


struct node *insert_nrec(struct node *root, int ikey );
void display(struct node *ptr,int level);


int main( )
{
        struct node *root=NULL, *ptr;
        int choice,k;

        while(1)
        {
                printf("\n");
                printf("1.Insert\n");
                printf("2.Display\n");
                printf("3.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {

                case 1:
                        printf("\nEnter the key to be inserted : ");
                        scanf("%d",&k);
                        root = insert_nrec(root, k);
                        break;

                case 2:
                        printf("\n");
                        display(root,0);
                        printf("\n");
                        break;

                case 3:
                        exit(1);

                default:
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while */
}/*End of main( )*/


struct node *insert_nrec(struct node *root, int ikey)
{
        struct node *tmp,*par,*ptr;

        ptr = root;
        par = NULL;

        while( ptr!=NULL)
        {
                par = ptr;
                if(ikey < ptr->info)
                        ptr = ptr->lchild;
                else if( ikey > ptr->info )
                        ptr = ptr->rchild;
                else
                {
                        printf("\nDuplicate key");
                        return root;
                }
        }

        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=ikey;
        tmp->lchild=NULL;
        tmp->rchild=NULL;

        if(par==NULL)
                root=tmp;
        else if( ikey < par->info )
                par->lchild=tmp;
        else
                par->rchild=tmp;

        return root;
}/*End of insert_nrec( )*/


void display(struct node *ptr,int level)
{
        int i;
        if(ptr == NULL )/*Base Case*/
                return;
        else
    {
                display(ptr->rchild, level+1);
                printf("\n");
                for (i=0; i<level; i++)
                        printf("    ");
                printf("%d", ptr->info);
                display(ptr->lchild, level+1);
        }
}/*End of display()*/
