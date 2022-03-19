



//bubble sort algorithm
//best, average, worst time complexity
//space complexity
//compare with other sorting algorithms

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random_array[10];
    int iteration, compare, n = 10, temp;
    
    srand(time(NULL));
    printf("Unsorted array\n");
    for(int i = 0; i < 10; i++)
    {
        random_array[i] = rand() % 100;
        printf("%d ", random_array[i]);
    }
    
    for(iteration = 0; iteration < n-1; iteration++)
    {
        for(compare = 0; compare < n-iteration-1; compare++)
        {
            if(random_array[compare] > random_array[compare+1])
            {
                temp = random_array[compare];
                random_array[compare] = random_array[compare+1];
                random_array[compare+1] = temp;
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

