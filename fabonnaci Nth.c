#include<stdio.h>
#include<conio.h>
int main()
{
    int prev=0,cur=1, next=0;
    int n, i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
    }
    printf("%d ",next);
    return 0;
}
