#include<stdio.h>
void prime(int n)
{
    int x=2,i;
    while(n)
    {
        for(i=2;i<=x;i++)
            if(x%i==0)
            break;
        if(i==x)
        {
            printf("%d ",x);
            n--;
        }
        x++;
    }
}
int main()
{
    prime(6);
    return 0;
}
