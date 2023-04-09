

//4. Write a program to print the Fibonacci series using recursive programming 
//till a given number 
#include<stdio.h>

int fibo(int );

int main()
{
    int n = 0, user_fibo, series_num;
    
    printf("enter a fibo_num:\n");
    scanf("%d", &user_fibo);
    
    while(1)
    {
        series_num = fibo(n);
        if(series_num <= user_fibo)
        {
            printf("%d ", series_num);
            n++;
        }
        else
        {
            break;
        }
    }
    return 0;
}

int fibo(int n)
{
    if(n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}
