#include <stdio.h>
int main ()
{
    double a[50],n;
    int i,j,k;
    printf ("Enter the number of elements:\n");
    scanf ("%lf",&n);
    if (n<=0||(int) n!=n)
    {
        printf ("Invalid input");
        return 0;
    }
    printf ("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf ("%lf",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                for (k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf ("The new array is:\n");
    for (i=0;i<n;i++)
    {
        printf ("%lf\t",a[i]);
    }
    return 0;
}