#include<stdio.h>
int main()
{
int n=20;
float a,b,fa,fb,x,dx=0.1, fx,integ ,sum=0;
a=0,b=2;
x=a ,fa=0.2+25*x+3*x*x;
x=b ,fb=0.2+25*x+3*x*x;
x=0.1;
for(int i=1;i<=n-1;i++)
{
fx=0.2+25*x+3*x*x;
sum=sum+fx;
x=x+dx;
}
integ=((b-a)/n)*(fa+fb+2*sum)/2;
printf("\n Summation of the given equation is %f:",integ);
}
