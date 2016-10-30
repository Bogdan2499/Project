#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
        //number of arguments
    if (argc != 2) {
        
        printf("Try again\n");
        
        return 1;
    }
        //reading a line of text
    string key = argv[1];
   
    for (int k = 0, n = strlen(key); k < n; k++)
    {
            // To check whether a character is a letter
        if (!isalpha(key[k]))
       
        {
            printf("Try again\n");
           
            return 1;
        }
    }
    string txt = GetString();
    
    if (txt == NULL){
       
        printf("Try again");
        
        return 1;
    }
        //receiving and encryption line length
    for (int i = 0,j=0; i < strlen(txt); i++)
    {
            //check whether the character is a letter
        if (isalpha(txt[i]))
        {
                //check whether the character is a small letter
            if (islower(txt[i]))
                printf("%c", ((((txt[i] - 'a') + ((tolower(key[j++%strlen(key)])) - 'a') % 26) % 26) + 'a'));
            
                //check whether the character is a big letter
            if (isupper(txt[i]))
                printf("%c", ((((txt[i] - 'A') + ((toupper(key[j++%strlen(key)])) - 'A') % 26) % 26) + 'A'));
        }
        else
          
            printf("%c", txt[i]);
    }
    printf("\n");
    
    return 0;
}
