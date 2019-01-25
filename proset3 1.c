#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i,j,c=0;
clrscr();
printf("enter n:\n");
scanf("%d",&n);
printf("enter array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
c=a[i]+a[j];
break;
}
}
printf("%d",c);
getch();
}
