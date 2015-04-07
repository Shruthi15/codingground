#include <stdio.h>
int main()
{
    char s[] = "My name is shruthi";
    char *temp= s;
    reversewords(s);
    printf("%s",s);
    return 0;
}
//Function prototype for utility function reverse
void reverse(char *start, char *end);

void reversewords(char *s)
{
    char *i =s; // word beginning ->i
    char *temp =s;
    while(*temp)
    {
        temp++;
        if(*temp == '\0')
        {
            reverse(i, temp-1);
        }
        else if(*temp ==' ')
        {
           reverse(i, temp-1);
           i = temp+1;
        }
    }
   reverse(s,temp-1); 
}

void reverse(char *start , char *end)
{
    while(start<end)
    {
        char temp;
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

