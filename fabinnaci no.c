#include<stdio.h>
#include<conio.h>
int main()
{
    int prev=0,cur=1, next=0;
    int n, i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=0;1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
        if(next==n)
        {
            printf("number found");
            break;
        }
        if(next>n)
        {
            printf("not found");
            break;
        }
    }

    return 0;
}
