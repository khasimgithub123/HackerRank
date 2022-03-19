



//Insertion sort algorithm
//find correct position and insert the key element

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random_array[10];
    int iteration, compare, n = 10, key;
    
    srand(time(NULL));
    printf("Unsorted array\n");
    for(int i = 0; i < 10; i++)
    {
        random_array[i] = rand() % 100;
        printf("%d ", random_array[i]);
    }
    
    //logically divide array into sorted and Unsorted
    //place first element from unsorted array in the correct place of sorted array 
    for(iteration = 1; iteration < n; iteration++)
    {
        key = random_array[iteration];
        compare = iteration-1;
        
        while(compare >=0 && random_array[compare] > key)
        {
            random_array[compare+1] = random_array[compare];
            compare = compare - 1;
        }
        
        random_array[compare+1] = key;
    }
    
    printf("\nsorted array\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", random_array[i]);
    }
    
    return 1;
}
