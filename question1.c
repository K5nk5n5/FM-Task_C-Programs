#include <stdio.h>
int main ()
{
    double a,b,c,sum;
    int prime=1;
    printf ("enter three integers:\n");
    scanf ("%lf %lf %lf",&a,&b,&c);
    sum=a+b+c;
    printf ("The sum is %.2f\n",sum);
    int Sum=sum;
    if (Sum!=sum)
    {
        printf ("The sum is not an integer and hence cannot be checked for even/odd or prime/composite");
        return 0;
    }
    if (Sum%2==0)
    {
        printf ("It is an even number\n");
    }
    else printf ("It is an odd number\n");
    for (int i=2;i<=Sum/2;i++)
    {
        if (Sum%i==0)
        {
            prime=0;
            break;
        }
    }
    if (Sum==0||Sum==1)
    {
        printf ("It is neither prime nor composite");
        return 0;
    }
    if (Sum<0)
    {
        prime=0;
    }
    if (prime==1)
    {
        printf ("It is a prime number\n");
    }
    else printf ("It is a composite number\n");
    return 0;
}