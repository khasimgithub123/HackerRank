

//7. Write a function to identify if a number is a prime number  

#include<stdio.h>
void Prime_check(int );

int main()
{
   
   int n;
   printf("enter a number:\n");
   scanf("%d", &n);
   
   Prime_check(n);

   return 0;
}

void Prime_check(int n)
{
   int count = 0;
   
   for(int i = 1; i <= n; i++)
   {
       if(n%i == 0)
       {
           count++;
       }
    }
    
    if(count == 2)
    {
        printf("%d is prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    
}
*/

/*----------------------------------------------*/

/*
//8. Write a Function to print in the following triangle format
#include<stdio.h>

int main()
{
    int rows, spaces;
    int row_num, print_num = 1, j;
    printf("enter number of rows:\n");
    scanf("%d", &rows);
    
    for(row_num = 1; row_num <= rows; row_num++)
    {
        for(spaces = 1; spaces <= rows-row_num; spaces++)
        {
            printf(" ");    
        }
        
        for(j = 1; j <= 2*row_num - 1; j++)
        {
            if(j%2 != 0)
            {
                printf("%2d", print_num);
                print_num++;
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
*/

/*---------------------------------------------*/
/*
//9. Write a Function to print in the following triangle format
#include<stdio.h>

int main()
{
    int rows, spaces;
    int row_num, print_num = 1, j;
    printf("enter number of rows:\n");
    scanf("%d", &rows);
    
    for(row_num = 1; row_num <= rows; row_num++)
    {
        for(spaces = 1; spaces <= rows-row_num; spaces++)
        {
            printf(" ");    
        }
        print_num = 1;
        for(j = 1; j <= 2*row_num - 1; j++)
        {
            if(j%2 != 0)
            {
                printf("%d", print_num);
                print_num++;
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
*/


/*------------------------------------------------*/
/*
//10. write a function to validate email address

#include<stdio.h>
#include<string.h>

int validate_email(char *, char *);

int main()
{
    char valid_email[25] = "khasimhussain@gmail.com";
    char check_email[25];
    int i;
    
    printf("enter your email address\n");
    scanf("%s\n", check_email);
    
    i = validate_email(valid_email, check_email);
    
    if(i == 0)
    {
        printf("correct\n");
    }
    else
    {
        printf("wrong\n");
    }
    return 0;
}

int validate_email(char *valid_email, char *check_email)
{
    int i;
    
    i = strcmp(valid_email,check_email);
    
    return i;
}

*/

/*--------------------------------------------------------*/

/*
//12.	Write a function to compare 2 Arrays 
//and print the members that are not present in each other.

#include<stdio.h>

void compare_arrays(int *, int *, int);

int main()
{
    int arr1[20],arr2[20], no_of_elements;
    
    printf("enter number of elements in each array:\n");
    scanf("%d", &no_of_elements);
    
    for(int i = 0; i < no_of_elements; i++)
        scanf("%d", &arr1[i]);
    
    for(int i = 0; i < no_of_elements; i++)
        scanf("%d", &arr2[i]);
        
    compare_arrays(arr1,arr2,no_of_elements);
        
    return 0;
}

void compare_arrays(int *arr1, int *arr2, int n)
{
    int flag1 = 0;
    int flag2 = 0;
    
    //for array1
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr1[i] == arr2[j])
            {
                flag1 = 1;
                break;
            }
        }
        if(flag1 == 0)
        {
            printf("%d is not in arr2\n", arr1[i]);
        }
        flag1 = 0;
    }
    
    //for array 2
     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr2[i] == arr1[j])
            {
                flag2 = 1;
                break;
            }
        }
        if(flag2 == 0)
        {
            printf("%d is not in arr1\n", arr2[i]);
        }
        flag2 = 0;
    }
    
}

*/

/*----------------------------------------------------*/

//13.	Write a Function to print *âs in triangle format
/*
#include<stdio.h>

int main()
{
	
	int i, j;
	int rows, k;
	
	
	printf("enter number of rows:\n");
	scanf("%d", &rows);
	
	k = rows;
	
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=k-i; j++)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
*/

/*-----------------------------------------------*/

/*
//14.	Write a function to split a Array in to 2 arrays in such a way that all odd members 
//into 1 array, and even members into another array.
#include<stdio.h>
#include<stdlib.h>

int *split_fun(int *, int *, int *, int);

int main()
{
   int arr[20], no_of_elements;
   int *even_array, *odd_array;
   int *count_return_main;
   
   printf("enter number of elements:\n");
   scanf("%d", &no_of_elements);
   
   for(int i = 0; i < no_of_elements; i++)
        scanf("%d",&arr[i]);
        
    even_array =  (int *)malloc(no_of_elements*sizeof(int));
    odd_array  =  (int *)malloc(no_of_elements*sizeof(int));
    
    count_return_main = split_fun(arr, even_array, odd_array, no_of_elements);
    
    printf("\n");
    
    for(int i = 0; i < count_return_main[0]; i++)
    {
        printf("%d ", even_array[i]);
    }
    printf("\n");
    
    for(int i = 0; i < count_return_main[1]; i++)
    {
        printf("%d ", odd_array[i]);
    }
    
    free(even_array);
    free(odd_array);
    
    return 0;
        
}

int *split_fun(int *arr, int *even_array, int *odd_array, int n)
{
    int even_count = 0, odd_count = 0;
    int *count_return;
    
    count_return = (int *)malloc(2*sizeof(int));
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even_array[even_count]= arr[i];
            even_count++;
        }
        else
        {
            odd_array[odd_count] = arr[i];
            odd_count++;
        }
    }
    count_return[0] = even_count;
    count_return[1] = odd_count;
    
    return count_return;
}
*/

/*-----------------------------------------------*/

/*
//15. Write a function to print number of duplicate elements
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
    int dup_count = 0;
    
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
                dup_count++;
            }
            else
            {
                
            }
            
        }
        printf("%d repeated %d times\n", a_insidefun[i], dup_count);
        dup_count = 0;
    }
    
    printf("After removing duplicate elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a_insidefun[i]);
    }
    
    
}

*/

/*-------------------------------------------------------------*/

/*
//16. You are given two numbers A and B. 
//The lowest common multiple of two integers A and B is usually denoted by LCM(A, B).
//Print the Lowest Common Multiple (LCM) of A and B.
#include <stdio.h>  
  
int gcd(int a, int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  
  
int lcm(int a, int b)  
{  
    return (a*b)/gcd(a, b);  
}  
  
int main()  
{  
    int a, b;
    
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));  
    return 0;  
}


