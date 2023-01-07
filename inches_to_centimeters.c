// inches to centimeters
#include<stdio.h>
float inches(int i)
{
    float c = 2.54*i;
    return c;
}
int main()
{
    int i;
    float x1;
    scanf("%d",&i);
    x1=inches(i);
    printf("%.2f",x1);
}