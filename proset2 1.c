#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[10],i,j,f=0;
clrscr();
printf("enter n & k:\n");
scanf("%d%d",&n,&k);
printf("enter array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==k)
{
f=1;
printf("yes");
}
}
}
if(f==0)
printf("no");
getch();
}
