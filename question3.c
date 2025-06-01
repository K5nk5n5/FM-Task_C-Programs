#include <stdio.h>
int main()
{
    int units,sum;
    printf ("Enter total units:\n");
    scanf ("%d",&units);
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
    printf ("The total electricity bill is : %d rs",sum);
    return 0;
}