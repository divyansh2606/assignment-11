#include<stdio.h>
void febonocci(int n)
{
    int i,f1=-1,f2=1,f3;
    for(i=0;i<n;i++)
    { f3=f2+f1;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }

}
int main()
{
    febonocci(6);
    return 0;
}
