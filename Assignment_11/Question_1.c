#include<stdio.h>
int LCM(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            return i;
        }
    }
}
int main()
{
    int a,b,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    s=LCM(a,b);
    printf("LCM of %d and %d is %d",a,b,s);
    return 0;
}
