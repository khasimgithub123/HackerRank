




//partition problem in quick sort algorithm
//

#include<stdio.h>
#include<stdlib.h>

int Partition(int *A, int start, int end)
{
    int pivot = A[end], temp;
    int partitionIndex = start; //set partition index as start initially
    for(int i = start; i < end; i++)
    {
        if(A[i] <= pivot)
        {
            //swap if element is lesser than pivot
            temp = A[i];
            A[i] = A[partitionIndex];
            A[partitionIndex] = temp;
            partitionIndex++;
        }
    }
    
    //swap pivot with element at partition index
    temp = A[end];
    A[end] = A[partitionIndex];
    A[partitionIndex] = temp;
    
    return partitionIndex;
}



int main()
{
    int A[] = {7,92,5,14,33,2,1,0,2,10}, i;
    i = Partition(A,0,9);
    for(int i = 0; i <= 9; i++)
    {
        printf("%d ", A[i]);
    }
}
