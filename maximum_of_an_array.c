#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i;
    int max=-9999;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}