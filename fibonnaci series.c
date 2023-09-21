#include<stdio.h>
#include<conio.h>
int main()
{
    int prev=0,cur=1, next=0;
    int n, i;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("1 ");
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        printf("%d ",next);
        prev=cur;
        cur=next;

    }
    return 0;
}
