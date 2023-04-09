

// 5. Find duplicate elements in an array and remove the repeated elements
#include<stdio.h>

void Delete_dups(int *, int);
int main()
{
   int a[20], no_of_elements;
   
   printf("enter no of elements in array\n\n");
   scanf("%d\n",&no_of_elements);
   
   for(int i = 0; i < no_of_elements; i++)
        scanf("%d", &a[i]);
    
    printf("Before removing duplicate elements:\n");
    for(int i = 0; i < no_of_elements; i++)
        printf("%d ", a[i]);
    
    printf("\n");
    Delete_dups(a,no_of_elements);    
   return 0;  

}

void Delete_dups(int *a_insidefun, int n)
{
    int i, j, k;
    
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a_insidefun[i] == a_insidefun[j])
            {
                k = j;
                for(; k < n ; k++)
                {
                    a_insidefun[k] = a_insidefun[k+1];
                }
                n--;
                j--;
            }
            else
            {
                
            }
            
        }
    }
    
    printf("After removing duplicate elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a_insidefun[i]);
    }
    
    
}
