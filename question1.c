#include <stdio.h>
int main ()
{
    int a,b,c,sum,prime=1;
    printf ("enter three integers:\n");
    scanf ("%d\n%d\n%d",&a,&b,&c);
    sum=a+b+c;
    printf ("The sum is %d\n",sum);
    if (sum%2==0)
    {
        printf ("It is an even number\n");
    }
    else printf ("It is an odd number\n");
    for (int i=2;i<=sum/2;i++)
    {
        if (sum%i==0)
        {
            prime=0;
            break;
        }
    }
    if (sum<=1)
    {
        printf ("It is neither prime nor composite");
        return 0;
    }
    if (prime==1)
    {
        printf ("It is a prime number\n");
    }
    else printf ("It is a composite number\n");
    return 0;
}