#include <stdio.h>
int main ()
{
    int a[50],n,i,j,k;
    printf ("Enter the number of elements:\n");
    scanf ("%d",&n);
    printf ("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
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
        printf ("%d\t",a[i]);
    }
    return 0;
}