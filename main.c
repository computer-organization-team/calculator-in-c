#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long maxmum(long long num1, long long num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int main()
{

    int x;
    long long a,b,result;
    printf("enter number of operation : ");
    scanf("%d",&x);
    if(x==1||x==2)
    {

        printf("enter number 1 and number 2 ");
        scanf("%lld%lld",&a,&b);
    }
    if(x==1)
    {
        printf("%lld-%lld=%lld",a,b,a-b);
    }
    else if(x==2)
    {
        while(b==0)
        {
            printf("division over zero invalid");
        }
        printf("%lld/%lld=%lld",a,b,a/b);
    }
    else if(x==3)
    {
        long long size=0,max=-999999,x;

        printf("enter list size \n");
        scanf("%lld",&size);
        for(long long i=0; i<size; i++)
        {
            scanf("%lld",&x);
            max=maxmum(max,x);

        }
        printf("%lld",max);
    }
    else if(x==4)
    {
        double a,b;
        printf("enter base and the power  \n");
        scanf("%lf%lf",&a,&b);
        printf("%.2lf ^ %.2lf= %.2lf",a,b,pow(a,b));
    }
    else if(x==5){
        double a;
        printf("enter the angle in degree  \n");
        scanf("%lf",&a);
        a*=0.0174532925 ;
        printf("%.2lf",sin(a));
    }
     else if(x==6){
        double a;
        printf("enter the angle in degree  \n");
        scanf("%lf",&a);
        a*=0.0174532925 ;
        printf("%.2lf",cos(a));
    }
     else if(x==7){
        double a;
        printf("enter the angle in degree  \n");
        scanf("%lf",&a);
        a*=0.0174532925 ;
        printf("%.2lf",tan(a));
    }
    else if(x==8){
       double a;
        printf("enter the number  \n");
        scanf("%lf",&a);
        printf("%lf",sqrt(a));
    }
    else if (x==9){
        double a,b,c,d;
        int sum=0;
        printf("enter base and the length  \n");
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        if(a==b)sum++;
        if(a==c)sum++;
        if(a==d)sum++;
        if(b==c)sum++;
        if(b==d)sum++;
        if(c==d)sum++;
        (sum==2)? printf("this is rectangle") : printf("this is not rectangle");

    }
    else if (x==10){
         double a,b,c;
        printf("enter base and the length  \n");
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a+b>c && a+c>b && b+c >a)printf("this is rectangle");
        else printf("this is not rectangle");
    }

    return 0;
}
