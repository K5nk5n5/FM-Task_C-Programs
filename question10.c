#include <stdio.h>
int main ()
{
    int a[50],n,i,j,temp;
    printf ("Enter the number of elements:\n");
    scanf ("%d",&n);
    printf ("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf ("The sorted array:\n");
    for (i=0;i<n;i++)
    {
        printf ("%d\t",a[i]);
    }
    int element,low=0,high=n-1,mid,found=0;
    printf ("\nEnter the element you want to find:\n");
    scanf ("%d",&element);
    while (low<=high) 
    {
        mid = (low + high) / 2;

        if (a[mid]==element) 
        {
            printf("Element found at position: %d\n", mid+1);
            found = 1;
            break;
        }
        else if (a[mid]<element)
            low=mid+1;
        else
            high=mid-1;
    }

    if (found==0)
        printf("Element not found");
        return 0;
}