#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,l=0,j;
clrscr();
printf("enter sentence:\n");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]!=' ')
if(a[i]==a[j])
a[i]='$';
}
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' '&&a[i]!='$')
{
if(a[i]>=97&&a[i]<=122)
{
l++;
}
}
}
if(l==26)
printf("yes");
else
printf("no");
getch();
}

