#include<stdio.h>
int fact(int n)
{ int i;
    int f=1;
    for(i=1;i<=n;i++)
    {
        f=i*f;
    }
    return f;
}

int main()
{
   int i,sum=0;
   for(i=1;i<=5;i++)
   {
       sum=sum+fact(i)/i;
   }
   printf("%d",sum);
   return 0;
}

