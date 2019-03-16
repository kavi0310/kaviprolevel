#include<stdio.h>
int main()
{
    long int n,a;
    int j=0,k,l=0,r,b[100],m=0;
    scanf("%ld%d",&n,&k);
    a=n;
    while(n)
    {
        n=n/10;
        l++;
    }
    if(k!=0)
    {
    k=l-k;
    while(k)
    {
        r=a%10;
        b[j]=r;
        a=a/10;
        k--;
        j++;
        m++;
    }
    for(j=m-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }
    }
    else
    printf("%ld",a);
}
