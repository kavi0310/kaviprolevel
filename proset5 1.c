#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,p,q,r,i,j,k,p1,max=0,q1,r1;
clrscr();
printf("enter n,p,q,r:\n");
scanf("%d%d%d%d",&n,&p,&q,&r);
printf("enter array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
p1=a[i]*p;
if(p1>max)
max=p1;
}
max=0;
for(j=0;j<n;j++)
{
q1=a[j]*q;
if(q1>max)
max=q1;
}
max=0;
for(k=0;k<n;k++)
{
r1=a[k]*r;
if(r1>max)
max=r1;
}
printf("%d",p1+q1+r1);
getch();
}
