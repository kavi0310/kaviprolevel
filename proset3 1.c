#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i,j,k,max=0,max1=0,p=0;
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
if(a[i]>max)
max=a[i];
}
for(k=0;k<2;k++)
{
max1=0;
for(j=0;j<n;j++)
{
if(a[j]>max1)
{
max1=a[j];
p=j;
}
}
a[p]=0;
}
printf("%d",max+max1);
getch();
}
