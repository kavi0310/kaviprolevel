#include<stdio.h>
int main()
{
    int n,a[1000],i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            k=k+j;
        }
    }
    printf("%d",k);
}
