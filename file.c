#include <stdio.h>
int main()
{
FILE *fb;
int a;
char c[50];
printf("enter your name\n");
scanf("%s",c);
fb=fopen("sample2.txt","w");
fprintf(fb,"%s",c);
return 0;
}
