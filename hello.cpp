#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void ToUpperCase(char*);
int main()

{  int n=100;
     char *p=(char*)malloc(n*sizeof(char));
     if(p==NULL)
     {
          printf("out of memmory\n");
     
          return 0;
     }

     printf("enter a paragraph :\n");
     scanf("%[^\n]s",p);
     printf("paragraph is : %s\n", p);

     ToUpperCase(p);
     printf("changed paragraph is : %s\n", p);
     free (p);
     p=NULL;
     return 0;

}

 void ToUpperCase(char *p)
 {
 while(*p)
 {
if(islower(*p))
*p=*p-32;
p++;
 }
 }

