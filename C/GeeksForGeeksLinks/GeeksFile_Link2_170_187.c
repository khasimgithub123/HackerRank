


/*------------------------------------------------------*/
/*
//17. You are given an array of length N that contains only integers. 
//A number in this array is called a special number if it is divisible by at least one other number in the array. 
Write a program to print the count of special numbers in the array.
#include<stdio.h>

int main()
{
    
    int arr[20], num;
    printf("number of elements:\n");
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            if(i != j)
            {
                if(arr[i] % arr[j] == 0)
                {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }
    
    return 0;
}

*/


/*------------------------------------------------------*/
/*
//18. Write a function to identify
//a. Multiplication value of 2 numbers with out using multiplication operator.
//b. Division value of 2 numbers with out using division operator.

#include<stdio.h>

int mul(int, int);
int div(int, int);
int main()
{
    int mul_result, div_result;
    int first_num, second_num;
    
    printf("enter two numbers:\n");
    scanf("%d %d", &first_num, &second_num);
    
    mul_result = mul(first_num, second_num);
    
    printf("multiplication = %d\n", mul_result);
    
    div_result = div(first_num, second_num);
    
    printf("division = %d\n", div_result);
    return 0;
}

int mul(int first_num, int second_num)
{
    int answer = first_num;
    int increment = first_num;
    for(int i = 1; i < second_num; i++)
    {
            answer =  answer + increment;
    }
    
    return answer;
}

int div(int first_num, int second_num)
{
    
    int dividend = first_num;
    int diviser = second_num;
    int result = 0;
    
    while(dividend >= diviser)
    {
        result++;
        dividend = dividend - diviser;
    }
    
    return result;
    
}
*/



/*-------------------------------------------------------*/
/*
//19. Write a function to identify the reminder of division of 2 numbers 
//without using division / mod operator
#include<stdio.h>

int main()
{
    int dividend, divisor;
    int result;
    
    printf("enter two numbers:\n");
    scanf("%d %d", &dividend, &divisor);
    
    while(dividend >= divisor)
    {
        result = dividend - divisor;
        dividend = dividend - divisor;
    }
    
    printf("remainder:%d", result);
}

*/


/*-------------------------------------------------------*/

/*
//20. Write a function to identify the power value of 2 numbers without 
// using multiplication operator
#include<stdio.h>

int power_user(int, int);

int main()
{
    
    int n, raise_to, result;
    printf("enter two numbers:\n");
    scanf("%d %d", &n, &raise_to);
    
    result = power_user(n,raise_to);
    
    printf("\n%d", result);
    
    return 0;
}

int power_user(int n, int raise_to)
{
    int increment = n;
    int answer = n;
    for(int i = 1; i < raise_to; i++)
    {
        for(int j = 1; j < n; j++)
        {
            increment = increment + answer;    
        }
        answer = increment;
    }
    
    return answer;
}

*/

/*-------------------------------------------------------*/

/*
//21. Write a program to print the prime numbers between 2 given numbers.
#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("enter a number:\n");
    scanf("%d", &n);
    
    for(int i = 2; i <=n; i++)
    {
        
        for(int j = 1; j <= i; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d ", i);
        }
        count = 0;
    }
        
    
}

*/

/*-------------------------------------------------------*/

/*
//22. Write a function to accept a number from the user and do the following, 
//from 0 to the given number place each of below type in a separate array.
//a.	Prime numbers in  array1, 
//From the rest of the numbers (excluding the prime), 
//b.	Put all the even number in array 2
//c.	All odd number in array3.

#include<stdio.h>

int main()
{
    int arr[20], no_of_elements;
    int prime_array[10], even_array[10], odd_array[10];
    int count = 0, p = 0, e = 0, q = 0;
    
    printf("enter number of elements\n");
    scanf("%d", &no_of_elements);
    
    for(int i = 0; i < no_of_elements; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 0; i < no_of_elements; i++)
    {
        // prime number logic
        for(int j = 1; j <= arr[i]; j++)
        {
            if(arr[i]%j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            prime_array[p] = arr[i];
            p++;
        }
        count = 0;
        
        //even number logic
        if(arr[i]%2 == 0)
        {
            even_array[e] = arr[i];
            e++;
        }
        else if(arr[i]%2 != 0)
        {
            odd_array[q] = arr[i];
            q++;
        }
    }
    
    printf("prime numbers:\n");
    for(int i = 0; i < p; i++)
        printf("%d ", prime_array[i]);
        
    printf("\n");
        
    printf("even numbers:\n");
    for(int i = 0; i < e; i++)
        printf("%d ", even_array[i]);
        
    printf("\n");
        
    printf("odd numbers:\n");
    for(int i = 0; i < q; i++)
        printf("%d ", odd_array[i]);
        
    return 0;
    
}

*/

/*---------------------------------------------*/
/*
//23. Write a function to generate a random number
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
 
int main(void) 
{ 
    srand(time(0));
  
    for(int i = 0; i<5; i++) 
        printf(" %d ", rand()); 
  
    return 0; 
} 
*/

/*-----------------------------------------*/
/*
//24. Write a function to count the number of vowels 
//and number of consonants in a given string

#include<stdio.h>

int main()
{
    int vowels = 0, consonents = 0;
    char str[] = "ijuuytre yto";
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
           vowels++;
           
        else if(ch == ' ')
            continue;
        else
            consonents++;
    }
    
    printf("vowels = %d\n", vowels);
    printf("consonents =%d\n", consonents);
    
    return 0;
}

*/

/*----------------------------------------------------------*/

/*
//25. Write a function to print the first occurrence of all the 
//characters in a given string, in the order in which they appear in the string
 
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch, Newch;
  	int i;
 
  	printf("Please Enter any String :\n");
  	scanf("%s", str);
  	
  	scanf(" %c", &ch);
  	scanf(" %c", &Newch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			str[i] = Newch;
 		}
	}
	
	printf("%s\n",str);
	
  	return 0;
}

*/

/*------------------------------------------*/
/*
//26. Given an input string, write a function to output âYesâ if the 
mirror image of the input string is identical to the original string, and âNoâ if not.
#include<stdio.h>
#include<string.h>

void isPalindrome(char *);

int main()
{
    char str[20];
    
    printf("input a string:\n");
    scanf("%s", str);
    
    isPalindrome(str);    
    
    return 0;
}

void isPalindrome(char *str)
{
    
    int start = 0;
    int end = strlen(str) - 1;
    
    while(end > start)
    {
        if(str[start++] != str[end--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    
    printf("%s is palindrome\n", str);
    
    return;
}

*/
/*--------------------------------------------------------*/

/*
//27. Given a text and a wildcard pattern, write a function to implement a wildcard 
pattern matching algorithm that finds if the pattern is matched with the input text
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
  
bool wildcardstr_match(char str[], char pattern[], int n, int m) 
{ 
     
    if (m == 0) 
        return (n == 0); 
  
    bool lookup[n + 1][m + 1]; 
  
    memset(lookup, false, sizeof(lookup)); 
  
    lookup[0][0] = true; 
  
    
    for (int j = 1; j <= m; j++) 
        if (pattern[j - 1] == '*') 
            lookup[0][j] = lookup[0][j - 1]; 
  
     
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = 1; j <= m; j++) 
        { 
            if (pattern[j - 1] == '*') 
                lookup[i][j] = lookup[i][j - 1] || lookup[i - 1][j]; 
  
            else if (pattern[j - 1] == '?' || str[i - 1] == pattern[j - 1]) 
                lookup[i][j] = lookup[i - 1][j - 1]; 
  
            else lookup[i][j] = false; 
        } 
    } 
  
    return lookup[n][m]; 
} 
  
int main() 
{ 
    char str[20]; 
    char pattern[20]; 
    
    printf("\nenter a string:");
    scanf("%s", str);
    
    printf("\nenter a wildcard string:");
    scanf("%s", pattern);
     
    if (wildcardstr_match(str, pattern, strlen(str), strlen(pattern)))
        printf("\nYES");
    else
        printf("\nNO"); 
  
    return 0; 
}

*/

/*--------------------------------------------------*/

/*
//28. Print characters in the order they appear
#include<stdio.h>

int main()
{
    char str[20];
    int i,j;
    
    printf("enter a random string:\n");
    scanf("%s", str);
    
    printf("%c", str[0]);
    
    for(i = 1; str[i] != '\0'; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                break;
            }
        }
        if(j == i)
        {
            printf("%c",str[i]);
        }
    }
    
    return 0;
}

*/

/*------------------------------------------------------*/

/*
//29. Write a function to find all the permutations of a string
#include <stdio.h> 
#include <string.h> 
  
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void permute(char *a, int l, int r) 
{ 
   int i; 
   if (l == r) 
     printf("%s\n", a); 
   else
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((a+l), (a+i)); 
          permute(a, l+1, r); 
          swap((a+l), (a+i));  
       } 
   } 
} 
  

int main() 
{ 
    char str[20];
    
    printf("enter a string:\n");
    scanf("%s", str);
    printf("\n");
    
    int n = strlen(str); 
    permute(str, 0, n-1); 
    return 0; 
} 

*/

/*-------------------------------------------------------*/

/*
//30. Write a function to identify if one string is part of another string or not
#include<stdio.h>

int substr_fun(char *, char *);

int main()
{
    char mainstr[20], substr[10];
    int i;
    
    printf("enter two strings\n");
    scanf("%s", mainstr);
    scanf(" %s", substr);
    
    i = substr_fun(mainstr, substr);
    
    if(i == 1)
    {
        printf("string present\n");
    }
    else
    {
        printf("string is not present\n");
    }
    
}

int substr_fun(char *mainstr, char *substr)
{
    int j, i;
        
    for(j = 0, i = 0; mainstr[j] != '\0'; j++)
    {
        if(substr[i] == mainstr[j])
        {
            i++;
            if(substr[i] == '\0')
            {
                return 1;    
            }
        }
        else if(substr[i] != mainstr[j])
        {
            i = 0;
        }
    }
        
    if(mainstr[j] == '\0')
        return 0;
    
}
*/

/*------------------------------------------------------------*/

/*
//31. Write a function to remove a given character from the string

#include <stdio.h> 
#include<string.h>

void removeChar(char *s, char ch) 
{
    int j, n = strlen(s); 
    for (int i=j=0; i<n; i++) 
       if (s[i] != ch) 
          s[j++] = s[i]; 
      
    s[j] = '\0'; 
} 
  
int main() 
{ 
   char s[20], ch;
   scanf("%s",s);
   scanf(" %c", &ch);
   removeChar(s, ch); 
   printf("%s", s); 
   return 0; 
}

*/

/*---------------------------------------------------*/

/*
//32. Write a function to find the longest palindrome in a string
#include <stdio.h> 
#include <string.h> 
  
void printSubStr(char* str, int low, int high) 
{ 
    for( int i = low; i <= high; ++i ) 
        printf("%c", str[i]); 
} 
  
 
int longestPalSubstr(char *str) 
{ 
    int maxLength = 1;   
  
    int start = 0; 
    int len = strlen(str);
    
    printf("\n");
    printf("Length of string is = %d", len);
    printf("\n");
  
    int low, high; 
  
    for (int i = 1; i < len; ++i) 
    { 
        low = i - 1; 
        high = i; 
        while (low >= 0 && high < len && str[low] == str[high]) 
        { 
            if (high - low + 1 > maxLength) 
            { 
                start = low; 
                maxLength = high - low + 1; 
            } 
            --low; 
            ++high; 
        } 
  
        low = i - 1; 
        high = i + 1; 
        while (low >= 0 && high < len && str[low] == str[high]) 
        { 
            if (high - low + 1 > maxLength) 
            { 
                start = low; 
                maxLength = high - low + 1; 
            } 
            --low; 
            ++high; 
        } 
    } 
  
    printf("\nLongest palindrome substring is: "); 
    printSubStr(str, start, start + maxLength - 1); 
  
    return maxLength; 
} 
  
int main() 
{ 
    char str[20];
    
    printf("enter a random string:\n");
    scanf("%s", str);
    
    printf("\nLength is: %d", longestPalSubstr( str ) ); 
    return 0; 
}

*/

/*-------------------------------------------------------------*/

/*
//33. Write a function to check if the binary representation of a number is a palindrome
#include<stdio.h>
 
int isKthBitSet(unsigned int x, unsigned int k) 
{ 
    return (x & (1 << (k - 1))) ? 1 : 0; 
} 
  

int isPalindrome(unsigned int x) 
{ 
    int l = 1; 
    int r = sizeof(unsigned int) * 8; 
  
    while (l < r) 
    { 
        if (isKthBitSet(x, l) != isKthBitSet(x, r)) 
            return 0; 
        l++; r--; 
    } 
    return 1; 
} 
  

int main() 
{ 
    unsigned int x, flag;
    
    printf("enter a number:\n");
    scanf("%d", &x);
    
    flag = isPalindrome(x);
    
    if(flag == 0)
        printf("not a palindrome\n");
    else
        printf("A palindrome\n");
    
    return 0; 
}
*/

/*-------------------------------------------*/

