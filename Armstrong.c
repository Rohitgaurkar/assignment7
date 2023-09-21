#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,x,s;
    printf("enter a number number ");
    scanf("%d",&n);
    s=0;
    x=n;
    while(x)
    {
        r=x%10;
        s=s+r*r*r;
        x=x/10;
    }
    if(s==n)
        printf("the %d is Armstrong no", n);
    else
        printf("the%d is not armstrong no",n);
    return 0;

}
