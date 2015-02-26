# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# define NO_OF_CHARS 256

 

bool areAnagram(char *str1, char *str2)
{
    
    int count[NO_OF_CHARS] = {0};

    int i;
    int n1 = strlen(str1);
    int n2 = strlen(str2);
 
    for (i = 0; str1[i] && str2[i];  i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
 
   //If strings are of are different length, returns false
    if (n1!=n2)
      return false;
 
    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return false;
 
    return true;
}
 

int main()
{
    char str1[256] , str2[256];
    printf("\n Enter The string1: ");
    scanf("%s", &str1);
     printf("\n Enter The string2: ");
    scanf("%s", &str2);
    
    if ( areAnagram(str1, str2) )
      printf("The two strings are anagram of each other");
    else
      printf("The two strings are not anagram of each other");
 
    return 0;
}

