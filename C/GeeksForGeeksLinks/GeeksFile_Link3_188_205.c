


/*--------------------------------------------------------------*/
/*
//34.Write a function to toggle all the even bits in a number to 0
#include<stdio.h>

void bin_fun(int );
int toggleoddbits(int );

int main()
{
    int num, new_num;
    scanf("%d", &num);
    
    printf("binary representation of number: ");
    bin_fun(num); 
    printf("\n");
    
    new_num = toggleoddbits(num);
    
    printf("binary representation after toggling: ");
    bin_fun(new_num);
    
    return 0;
}

void bin_fun(int num)
{
    for(int i = sizeof(num)*8 - 1; i >= 0; i--)
    {
        (num & (1<<i)) ? printf("1") : printf("0");
    }
    
    return;
}

int toggleoddbits(int num)
{
    for(int bitPos = sizeof(num) * 8 - 1 ; bitPos >= 0 ; bitPos--) 
    {
        if ( 0 == (bitPos % 2)) 
        {
            
            num = num ^ (1 << bitPos);
        }
    }
    
    return num;
}
 
*/

/*---------------------------------------------*/
/*
//35. Multiplication of two numbers using shift operator
#include<stdio.h>
  
int multiply(int n, int m) 
{   
    int ans = 0, count = 0; 
    while (m) 
    { 
        
        if (m % 2 == 1)               
            ans += n << count; 
  
        count++; 
        m /= 2; 
    } 
    return ans; 
} 
  
 
int main() 
{ 
    int n, m;
    printf("enter two numbers:\n");
    scanf("%d %d", &n, &m);
    printf("%d ",multiply(n, m)); 
    return 0; 
} 

*/


/*------------------------------------------*/

/*
//36. Write a function to check if the given string has only digits or not
#include<stdio.h>

int main()
{
    char s[30];
    int flag=0;
    
    printf("enter the string:\n");
    scanf("%s",s);
    
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
        {
            flag=flag+1;
        }
    }
    
    if(flag==0)
        printf("\ngiven string not contains numbers");
    else
        printf("\ngiven string contains numbers");
    
    return 0;
}
*/

/*--------------------------------------------------------------*/
/*
//37. Write a function to remove vowels in the given string and reverse it
#include<stdio.h>
#include<string.h>

void remove_vowels(char *);

int main()
{
    char str[20];
    
    
    printf("enter a string:\n");
    scanf("%s", str);
    
    remove_vowels(str);
    
    return 0;
}

void remove_vowels(char *str)
{
    int n = strlen(str);
    
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            for(int j = i; j < n; j++)
            {
                 str[j] = str[j+1];
            }
            n--;
            i--;
        }
    }
    
    printf("%s\n", str);
    
    for(int i = strlen(str)-1; i >= 0; i--)
        printf("%c", str[i]);
    
    return;
}

*/

/*---------------------------------------------------*/

/*
//38. Write a function to separate the characters and integers from the given string
#include<stdio.h>
#include<string.h>
  
void splitString(char* str) 
{ 
    char  alpha[20], num[20], special[20];
    int n = 0, a = 0, s = 0;
    int l = strlen(str);
    
    for (int i=0; i< l; i++) 
    { 
        if (str[i] >= '0' && str[i] <= '9')
        {
            num[n] = str[i];
            n++;
        }
        else if((str[i] >= 'A' && str[i] <= 'Z') || 
                (str[i] >= 'a' && str[i] <= 'z'))
        {
            alpha[a] = str[i];
            a++;
        }
        else
        {
            special[s] = str[i];
            s++;
        }
    } 
  
    for(int i = 0; i < n; i++)
    {
        printf("%c", num[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < a; i++)
    {
        printf("%c", alpha[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < s; i++)
    {
        printf("%c", special[i]);
    }
    
    printf("\n");
    
} 
  
 
int main() 
{ 
    char* str = "geeks01$$for02geeks03!@!!"; 
    splitString(str); 
    return 0; 
} 

*/

/*---------------------------------------------*/

/*
//39.	Write a function to find the missing integer
#include<stdio.h>
void missing_chars(char *);

int main()
{
    char str[20];
    
    printf("enter a string of numbers:\n");
    scanf("%s", str);
    
    printf("%s\n", str);
    
    missing_chars(str);
    
    return 0;
}

void missing_chars(char *str)
{
    int flag = 0;
    char ch;
    
    for(int i = 1; i < 10; i++)
    {
        for(int j = 0; str[j] != '\0' ; j++)
        {
            ch = str[j];
            if( '0'+ i == ch)
            {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
        {
            printf("%d ", i);
        }
        
        flag = 0;
    }
    
    return;
}

*/

/*------------------------------------------*/

/*
//40. Given a sorted array arr[] of n elements, 
//write a function to search(using Binary search) a given element x in arr[].
#include <stdio.h> 
  
int binarySearch(int *arr, int l, int r, int x) 
{ 
    while (l <= r) 
    { 
        int m = l + (r - l) / 2; 
  
         if (arr[m] == x) 
            return m; 
  
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
  
    return -1; 
} 
  
int main() 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x;
    
    printf("number want to search:\n");
    scanf("%d", &x);
    
    int result = binarySearch(arr, 0, n - 1, x); 
    
    if(result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d",result); 
    }
    return 0; 
} 

/*-------------------------------------------*/

/*
//41. Write a program to find sum of bit differences in a pair of numbers. 
#include<stdio.h>

int main()
{
    int num1, num2, new_num;
    int diff = 0;
    printf("input two numbers\n");
    scanf("%d %d", &num1, &num2);
    
    new_num = num1 ^ num2;
    
    for(int bit_pos = 0; bit_pos < sizeof(int) * 8; bit_pos++ )
    {
        if(new_num  & 1 << bit_pos)
        {
            diff++;
        }
    }
    
    printf("%d\n", diff);
    
    return 0;
}

*/

/*------------------------------------------*/
/*
//42. Given two numbers âaâ and bâ. 
Write a program to count number of bits needed to be flipped to convert âaâ to âbâ.
#include<stdio.h>
int main()
{
    int num1, num2, new_num;
    int no_of_bits = 0;
    printf("input two numbers\n");
    scanf("%d %d", &num1, &num2);
    
    new_num = num1 ^ num2;
    
    for(int bit_pos = 0; bit_pos < sizeof(int) * 8; bit_pos++ )
    {
        if(new_num  & 1 << bit_pos)
        {
            no_of_bits++;
        }
    }
    
    printf("number of bits to be flipped = %d \n", no_of_bits);
    
    return 0;
}

*/

/*------------------------------------------*/

/*
//43. Write a string compare 
function which ignores cases and returns TRUE if both are same else returns FALSE
#include<stdio.h>
#include<string.h>

int user_strcmp(char *, char *);

int main()
{
    char str1[20], str2[20];
    int i;
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    printf("string1 = %s\n", str1);
    printf("string2 = %s", str2);
    printf("\n");
    
    i = user_strcmp(str1, str2);
    
    if(i == 1)
        printf("true\n");
    else
        printf("false\n");
    
    return 0;
}

int user_strcmp(char *str1, char *str2)
{
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    int flag = 0;
    
    for(int i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] = str1[i] + 32;
        }
        else
        {
            
        }
    }
    
    for(int i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] = str2[i] + 32;
        }
        else
        {
            
        }
    }
    
    printf("\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    
    for(int i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0' ; i++,j++ )
    {
        if(str1[i] != str2[j] )
        {
            return 0;
        }
    }
    
    if(str1_len < str2_len || str1_len > str2_len)
    {
        return 0;
    }
    
    return 1;
}

*/

/*------------------------------------------------------------*/
/*
//44. Write a function to print the factorial for a given number 
// using recursive function
#include<stdio.h> 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
      return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    int num;
    
    printf("enter a number:\n");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num)); 
    return 0; 
} 
*/

/*--------------------------------------------------*/
/*
//45. Write a function to Find all distinct subsets of a given set
#include<stdio.h>
#include<math.h>

void showPowerSet(char *set, int set_length) 
{
   unsigned int size = pow(2, set_length);
   for(int counter = 0; counter < size; counter++) 
   {
      //printf("\n");
      printf("{");
        for(int j = 0; j < size; j++) 
        {
            if(counter & (1<<j))
            printf("%d ",set[j]);
        }
        printf("}");
        printf("\n");
    }
    
}

int main() 
{
   char set[] = {1,2,2};
   showPowerSet(set, 3);
   
   return 0;
}

*/

/*-------------------------------------------------------*/

/*
//46. Write a recursive function to implement bubble sort
#include<stdio.h> 

void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void bubbleSort(int *arr, int n) 
{ 
     
    if (n == 1) 
        return; 
  
    for (int i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]) 
            swap(&arr[i], &arr[i+1]); 
  
    bubbleSort(arr, n-1); 
} 
  
void printArray(int *arr, int n) 
{ 
    for (int i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int arr[] = {64, 34, 99, 12, 2, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array : \n"); 
    printArray(arr, n); 
    return 0; 
}

*/

/*----------------------------------------------*/

/*
//47. Write a function swap 2 nibbles in a byte.
#include <stdio.h> 
  
unsigned char swapNibbles(unsigned char x) 
{ 
    return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 ); 
} 
  
int main() 
{ 
    unsigned char x = 100;
    
    printf("%u", swapNibbles(x)); 
    return 0; 
}
*/

/*-------------------------------------------------------*/
/*
//48. Write a function to check if a number is multiple of 9 using bitwise operators.
#include <stdio.h> 
  
int isDivBy9(int n) 
{ 
    if (n == 0 || n == 9) 
        return 1; 
    if (n < 9) 
        return 0; 
  
    return isDivBy9((int)(n >> 3) - (int)(n & 7)); 
} 
  
 
int main() 
{ 
    for (int i = 0; i < 100; i++) 
        if (isDivBy9(i)) 
            printf("%d ", i); 
    return 0; 
}

*/

/*------------------------------------------------*/

/*
//49. Pairs sum equal to target value
#include<stdio.h>

void DupElements_Pairs(int *, int, int);

int main()
{
    int orgarr[20], num, target_value, flag = 0;
    int new_arr[20];
    static int newarr_size;
    
    printf("enter number of elements:\n");
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &orgarr[i]);
    }
    
    printf("enter target value:\n");
    scanf("%d", &target_value);
    
    for(int i = 0; i < num; i++)
    {
        new_arr[i] = orgarr[i];
    }
    
    DupElements_Pairs(new_arr,num,target_value);
    
    if(target_value % 2 == 0)
    {
        for(int i = 0; i < num-1; i++)
        {
            for(int j = i+1; j < num; j++)
            {
                if(orgarr[i] == orgarr[j] && orgarr[i]+orgarr[j] == target_value)
                {
                    printf("(%d,%d)",orgarr[i],orgarr[j]);
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }
    }
    
    return 0;
}

void DupElements_Pairs(int *new_arr, int num, int target_value)
{   
    int i,j,k;
    
    for(i = 0; i < num; i++)
    {
        for(j = i+1; j < num; )
        {
            if(new_arr[j] == new_arr[i])
            {
                for(k = j; k < num; k++)
                {
                    new_arr[k] = new_arr[k+1];
                }
                num--;
            }
            else
            {
                j++;
            }
        }
    }
    
    printf("\n");
    
    for(int i = 0; i < num; i++)
    {
        printf("%d ", new_arr[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < num - 1 ; i++)
    {
        for(int j = i+1; j < num ; j++)
        {
            if( new_arr[i] + new_arr[j] == target_value)
            {
                printf("(%d,%d)",new_arr[i],new_arr[j]);
                printf(" ");
            }
        }
    }
        
}

*/

/*---------------------------------------------*/

/*
//50. compute maximum difference in the array 
#include<stdio.h>
int main()
{
    int arr[20], num;
    int max_diff;
    int big_index = 0, small_index = 0;
    
    printf("enter number of elements:\n");
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max_diff = arr[0];
    
    for(int i = 1; i < num; i++)
    {
        for(int j = 0; j < i; j++)
        {
    
            if(arr[i] > arr[j])
            {
                if(max_diff < (arr[i] - arr[j]))
                {
                    max_diff = arr[i] - arr[j];
                    big_index = i;
                    small_index = j;
                }
            }
        }
    }    
    
    printf("maximum diff = %d of (%d,%d)", max_diff,arr[big_index],arr[small_index]);
    
}

*/


