#include<stdio.h>

int lcm(int,int);
int main()
{
    int s,x,y;
    printf("enter 2 no");
    scanf("%d%d",&x,&y);
    s=lcm(x,y);
    printf(" lcm is %d",s);
    return 0;
    }
int lcm(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            break;
        }
    }
    return i;
}
