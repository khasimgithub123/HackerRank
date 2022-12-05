
# Defanging an IP Address

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * defangIPaddr(char * address){

    char *re = (char *)malloc(sizeof(char)*24);
    char *dest_str = re; 

    while(*address)
    {
        if(*address == '.')
        {
            *dest_str++ = '[';
            *dest_str++ = '.';
            *dest_str++ = ']';
            address++;
        }
        else
        {
            *dest_str++ = *address++;
        }
    }

    *dest_str = '\0';
    dest_str = re;
    return dest_str;

}

int main()
{
    char str[24];
    char *re;
    
    fgets(str, 24, stdin);
    
    re = defangIPaddr(str);
    
    printf("%s\n", re);

    return 0;
}

