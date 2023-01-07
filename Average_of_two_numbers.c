//average of two number
#include<stdio.h>
float average(int a,int b)
{
    float c=(a+b)*0.5;
    return c;
}
int main()
{
    int a,b;
    float x1;
    scanf("%d%d",&a,&b);
    x1=average(a,b);
    printf("Average of %d and %d is: %.2f",a,b,x1);
}