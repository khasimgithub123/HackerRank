


//selection sort algorithm
//best, average, worst time complexity
//space complexity
//compare with other sorting algorithms

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random_array[10];
    int reference, compare, n = 10, temp;
    
    srand(time(NULL));
    printf("Unsorted array\n");
    for(int i = 0; i < 10; i++)
    {
        random_array[i] = rand() % 100;
        printf("%d ", random_array[i]);
    }
    
    for(reference = 0; reference < n-1; reference++)
    {
        for(compare = reference + 1; compare < n; compare++)
        {
            if(random_array[reference] > random_array[compare])
            {
                temp = random_array[reference];
                random_array[reference] = random_array[compare];
                random_array[compare] = temp;
            }
        }
    }
    
    printf("\n sorted array\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", random_array[i]);
    }
    
    return 1;
}
