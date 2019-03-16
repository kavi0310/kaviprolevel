#include<stdio.h>
int main()
{
    char a[10000],b[10000],c[10000],d[10000];
    int n,i,j,k,l;
    scanf("%d",&n);
    scanf("%s %s %s %s",a,b,c,d);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;b[j]!='\0';j++)
        {
            for(k=j;c[k]!='\0';k++)
            {
                for(l=k;d[l]!='\0';l++)
                {
                    if((a[i]==b[j])&&(b[j]==c[k])&&(c[k]==d[l])&&(a[i]==c[k])&&(a[i]==d[l])&&(b[j]==d[l]))
                    {
                    printf("%c",a[i]);
                    break;
                    }
                }
            }
        }
    }
}
