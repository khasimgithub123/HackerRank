

//6. Write a function to identify the largest and smallest numbers in an Array.
#include<stdio.h>

void find_small_big_nums(int *, int );
int main()
{
   int a[20], no_of_elements;
   
   printf("enter no of elements in array\n\n");
   scanf("%d\n",&no_of_elements);
   
   for(int i = 0; i < no_of_elements; i++)
        scanf("%d", &a[i]); 
    
    find_small_big_nums(a,no_of_elements);
    
    return 0;
}

void find_small_big_nums(int *a_insidefun, int n)
{
  int smallest, biggest;
  smallest = a_insidefun[0];
  biggest  = a_insidefun[0];
  
  for(int i = 1; i < n; i++)
  {
      if(a_insidefun[i] < smallest)
      {
          smallest = a_insidefun[i];
      }
      
      if(a_insidefun[i] > biggest)
      {
          biggest = a_insidefun[i];
      }
      
  }
   
   printf("smallest:%d\n", smallest);
   printf("biggest:%d\n", biggest);
}
