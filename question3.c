#include <stdio.h>
int main()
{
    double units,sum;
    printf ("Enter total units:\n");
    scanf ("%lf",&units);
    if (units<0)
    {
        printf ("Invalid input");
        return 0;
    }
    if (units<=100)
    {
        sum=units*5;
    }
    else if (units<=300)
    {
        sum=(100*5)+((units-100)*8);
    }
    else 
    {
        sum=(100*5)+(200*8)+((units-300)*10);
    }
    printf ("The total electricity bill is : %.2f rs",sum);
    return 0;
}