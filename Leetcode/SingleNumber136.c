
//find single number in array

#include<stdio.h>
#include<stdlib.h>

int singleNumber(int* nums, int numsSize)
{

    int unique = nums[0];
    
    for(int i = 1; i < numsSize; i++)
    {
        unique = unique ^ nums[i];
    }

    return unique;
}

int main()
{
    int *elements, array_size, unique;
    
    printf("number of elements:");
    scanf("%d", &array_size);
    
    elements = (int *)malloc(array_size*sizeof(int));
    
    printf("enter array elements:\n");
    
    for(int i = 0; i < array_size; i++)
    {
        scanf("%d", &elements[i]);
    }
    
    unique = singleNumber(elements, array_size);
    
    printf("Single Number = %d\n", unique);
    
    return 0;
    
}
