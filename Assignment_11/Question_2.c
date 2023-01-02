#include<stdio.h>
int HCF(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            return (x*y)/i;
        }
    }
}
int main()
{
    int a,b,s;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    s=HCF(a,b);
    printf("HCF of %d and %d is %d ",a,b,s);
    return 0;
}
