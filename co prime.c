#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i,hcf=1;
    printf("Enter 2 number\n");
    scanf("%d %d ", &x, &y);
   int min= x < y ? x :y;

    for(i=1;i<=min;i++)
    {
        if((x % i==0) && (y % i==0))
            hcf=i;
    }
    if(hcf==1)
        printf("co prime number\n");
    else
        printf("not co prime number\n");

      printf("Hcf is %d ",hcf);
     return 0;
}
