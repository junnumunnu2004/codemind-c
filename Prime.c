#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    if(n==0||n==1)
    x=1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            x=1;
            break;
        }
    }
    if(x==0)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}