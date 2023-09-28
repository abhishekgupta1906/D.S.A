// #include<stdio.h>
// #include<string.h>
// void parsed(char*string)
// {
//     int content=0; int j;
//     // ye variable btane ke liy h ki '>' ka collection kr rhe h
//     int index=0;
//     // index content ka index btane wla variable
//     // content=shift
//     // string[index] to ye shift ka index btayega
//     int i;
//     // iska mtlb h ki pura string ka hr character ko analyse kr rhe h.
//     for ( i = 0; i <strlen(string); i++)
//     {
//         if(string[i]=='<')
//         {
//             content=1;
//             continue;
//         }
//         else if (string[i]=='>')
//         {
//             content=0;
//             continue;
//         }

//         if(content==0)
//         {
//             string[index]=string[i];
//             index++;
//         }

        
        


    
        
//     }

//     string[index]='\0';
//     // for removing trailing spaces
//    while(string[0] == ' '){
//         //Shift the string to the left
//         for (int i = 0; i < strlen(string); i++)
//         {
//             /* code */
//             string[i] = string[i+1];
//         }
//     }
//     //Remove the trailing spaces from the end
//     while(string[strlen(string) - 1] == ' ')
//     {
//         string[strlen(string) - 1] = '\0';

//     }
    
    // yahan strlen(string -1)
    // kyu kiye iska reason h
    // man lete h agar a="shift" ek string h strlen(5) t 4th index pr h null character 5th index


// }
    

// int main()
// {
//     char abhi[]="<abhi>     i am a good coder</abhi>";
//     parsed(abhi);
//     printf("the parsed string is as follows: %s",abhi);
// }

    
    


