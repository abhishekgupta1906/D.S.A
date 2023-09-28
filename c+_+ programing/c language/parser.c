#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0;
    int content=0;
    int i;
    for (i = 0; i < strlen(string); i++)

    {
        if (string[i]=='>')
        {
            in = 0;
            continue;
        }
        else if(string[i]=='<')
        {    
            in=1;
            continue;
        }
            
         if (in==0)
        {

            string[content] = string[i];
            content++;
        }   
            

        
        

    }

    string[content]='\0';
    while (string[0]=='\0')
    {
        for ( i = 0; i < strlen(string); i++)
        {
            string[i]=string[i+1];
        }
        
        
    }
    
}
int main()
{
    char string[] = "<h1> iamverygood  </h1>";
    parser(string);
    printf("the parsed string is ~~ %s~~", string);
    return 0;
}
