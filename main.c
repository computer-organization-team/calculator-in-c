#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX(a, b) (((a > b)) ? (a) : (b))
#define MIN(a, b) (((a < b)) ? (a) : (b))
typedef long long int ll;

int x;
ll a,b,result;

void welcomeMessage() {
    puts("Welcome to scientific calculator!");
    puts("Choose your operation: you want to do: ");
    puts("(1) For subtraction\n(2) For division\n(3) For Max Of List\n(4) Power of Number\n(5) Factorization\n(6) For Sin\n(7) For Cos\n(8) For Tan\n(9) For Square root\n(10) For Rectangle detection\n(11) For Triangle detection");
    printf("Enter ur choice: ");
}

void Subtraction() { ll result = a-b; printf("%lld-%lld=%lld", a, b, result); }

void Division() { if(b==0) printf("division over zero invalid"); printf("%lld/%lld=%lld",a,b,a/b); }

void FindMax() {
        ll size=0,max=-999999,x; printf("Enter list size \n"); scanf("%lld",&size);
        for(ll i=0; i<size; i++) { scanf("%lld",&x); max=MAX(max,x); }
        printf("%lld",max); }

void Power() {
    double a,b;
    printf("enter base and the power  \n");
    scanf("%lf%lf",&a,&b);
    printf("%.2lf ^ %.2lf= %.2lf",a,b,pow(a,b));
}

void Sin() {
    double a;
    printf("enter the angle in degree  \n");
    scanf("%lf",&a);
    a*=0.0174532925 ;
    printf("%.2lf",sin(a));
}

void Cos() {
    double a;
    printf("enter the angle in degree  \n");
    scanf("%lf",&a);
    a*=0.0174532925 ;
    printf("%.2lf",cos(a));
}

void Tan() {
    double a;
    printf("enter the angle in degree  \n");
    scanf("%lf",&a);
    a*=0.0174532925 ; printf("%.2lf",tan(a));
}

void SQRT() {
    double a;
    printf("enter the number  \n");
    scanf("%lf",&a);
    printf("%lf",sqrt(a));
}

void Rectangle() {
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

void Triangle() {
    double a,b,c;
    printf("enter base and the length  \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c && a+c>b && b+c >a)printf("this is rectangle");
    else printf("this is not rectangle");
}

void factorization() {printf("test");}

int main()
{
    welcomeMessage();
    scanf("%d",&x);
    if(x==1||x==2)
    {
        printf("Enter first number and second number : ");
        scanf("%lld%lld",&a,&b);
    }

    if(x==1) Subtraction();
    else if (x==2) Division();
    else if (x==3) FindMax();
    else if (x==4) Power();
    else if (x==5) factorization();
    else if (x==6) Sin();
    else if (x==7) Cos();
    else if (x==8) Tan();
    else if (x==9) SQRT();
    else if (x==10) Rectangle();
    else if (x==11) Triangle();

    return 0;
}
