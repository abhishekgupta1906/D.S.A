#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*a=NULL;
// a=fopen("abhi.txt","r");
// char str[10];
// fscanf(a,"%s",str);
// printf("the content of file stored in the string str is %s",str);
// yahan pr str ka size se koi fark nhi pdta bs .whi print hoga jo underscore ke baad
// likha ho ya fir lagatar
// a=fopen("abhi.txt","w");
// char st[60]="i am an excellent coder";
// fprintf(a,"%s",st);
// printf("the content stored in the string st is %s",st);
// pehle ka sare content udd gya

// a=fopen("abhi.txt","a");
// char st[60]="i am an excellent and smart coder";
// fprintf(a,"%s",st);
// printf("the content stored in the string st is %s",st);
// pura content udda nhi aur nya content add ho gya

// a=fopen("abhi.txt","w");
// char c=fputc('m',a);
// fputs("hello vscode",a);
// pehle ka sara content udd jyega aur ye character aur string insert ho jyega

a=fopen("abhi.txt","r");
// char str2=fgetc(a);
//   printf("the character  that is read was %c\n",str2);
//   pehla character read ho gya
char str3[4];
fgets(str3,4,a);
 printf("the string  that is read was %s\n",str3);
//  mtlb shuru ke ke 3 characters mhe
// agar fgetc bhi h toh pehla charcter chor ke badd ka 3 character


return 0;
}