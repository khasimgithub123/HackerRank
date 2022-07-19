




//quick sort algorithm

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

void QuickSort(int *A, int start, int end)
{
    if(start < end)
    {
        int partitionIndex = Partition(A, start, end);
        QuickSort(A, start, partitionIndex-1);
        QuickSort(A, partitionIndex+1,end);
    }
}

int main()
{
    int A[] = {7,2,5,14,33,2,1,10};
    QuickSort(A,0,7);
    for(int i = 0; i < 8; i++)
    {
        printf("%d ", A[i]);
    }
}
