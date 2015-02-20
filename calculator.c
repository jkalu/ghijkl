#include<stdio.h>

long long int add(long long int a,long long int b)
{
return a+b;
}
<<<<<<< HEAD
<<<<<<< HEAD
double div(long long int a, long long int b)
{
if(b==0)
return 404;
return ((double)((double)a)/((double)b));
=======
long long int diff(long long int a, long long int b)
{
return a-b;
>>>>>>> Function to find the difference added
=======
long long int diff(long long int a, long long int b)
{
return a-b;
>>>>>>> ed3583a3f3e4b36612446edcdf30b0208ddfd8aa
}

int main()
{
long long int a,b;
scanf("%lld %lld",&a,&b);
printf("%lld\n",add(a,b));
return 0;
}
