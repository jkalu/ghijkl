#include<stdio.h>

long long int add(long long int a,long long int b)
{
return a+b;
}
long long int diff(long long int a, long long int b)
{
return a-b;
}

int main()
{
long long int a,b;
scanf("%lld %lld",&a,&b);
printff("%lld\n",add(a,b));
return 0;
}
