#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,s;
    printf("enter 2 no");
    scanf("%d%d",&a,&b);
    s=hcf(a,b);
    printf("hcf is %d",s);
    return 0;

}
int hcf(int x,int y)
{
    int h;
    for(h=x<y?x:y;h>=1;h--)
    {
        if((x%h==0)&&(y%h==0))
        {
            break;
        }
    }
    return h;
}
