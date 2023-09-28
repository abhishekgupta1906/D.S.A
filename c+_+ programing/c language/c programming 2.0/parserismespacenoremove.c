#include<stdio.h>
#include<string.h>
void parsed(char*string)
{
    int content=0;
    // ye variable btane ke liy h ki '>' ka collection kr rhe h
    int index=0;
    // index content ka index btane wla variable
    // content=shift
    // string[index] to ye shift ka index btayega
    int i;
    // iska mtlb h ki pura string ka hr character ko analyse kr rhe h.
    for ( i = 0; i <strlen(string); i++)
    {
        if(string[i]=='<')
        {
            content=1;
            continue;
        }
        else if (string[i]=='>')
        {
            content=0;
            continue;
        }

        if(content==0)
        {
            string[index]=string[i];
            index++;
        }

        
        


    
        
    }

    string[index]='\0';
    


}
    

int main()
{
    char abhi[]="<abhi>i am a good coder</abhi>";
    parsed(abhi);
    printf("the parsed string is as follows: %s",abhi);
}

    
    


