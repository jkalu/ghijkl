#include<stdio.h>

long long int add(long long int a,long long int b)
{
return a+b;
}
double div(long long int a, long long int b)
{
if(b==0)
return 404;
return ((double)((double)a)/((double)b));
long long int diff(long long int a, long long int b)
{
return a-b;
long long int diff(long long int a, long long int b)
{
return a-b;
}

long long int mul(long lonr int a,long long int b)
{
return a*b;
}

int main()
{
long long int a,b;
scanf("%lld %lld",&a,&b);
printf("%lld\n",add(a,b));
return 0;
}
