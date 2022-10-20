#include<stdio.h>
int prime(int);
int main()
{
    int x,s;
    printf("enter no");
    scanf("%d",&x);
    s=prime(x);
    if(s==1)
        printf("prime no");
    else
        printf("not prime no");
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
          {

           break;
           }
    }
    if(i==a)
    {
        a=1;
    }
    else
        a=0;
    return a;
}
