#include <stdio.h>
int main ()
{
    int a[50],n,*p,i,temp;
    printf ("Enter the number of elements:\n");
    scanf ("%d",&n);
    if (n<=0)
    {
        printf ("Invalid input");
        return 0;
    }
    printf ("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    p=a;
    for (i=0;i<n-1;i=i+2)
    {
        temp=p[i];
        p[i]=p[i+1];
        p[i+1]=temp;
    }
    printf ("The required array is:\n");
    for (i=0;i<n;i++)
    {
        printf ("%d\t",a[i]);
    }
    return 0;
}