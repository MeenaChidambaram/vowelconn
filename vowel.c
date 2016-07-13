#include<stdio.h>
int main()
{
char var;
scanf("%c",&var);
if(var=='a' || var=='e' || var=='i' || var=='o' || var=='u')
printf("its a vowel");
else
printf("its not a vowel");
getch();
return 0;
}
