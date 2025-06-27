#include <stdio.h>
int main ()
{
    int a[50],n,i,j,temp;
    char sort;
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
    printf ("If you would like to use Bubble Sort, enter 'b', and if you would like to use Selection Sort, enter 's':\n");
    getchar();
    scanf ("%c",&sort);
    if (sort!='b'&&sort!='s')
    {
        printf ("Invalid input");
        return 0;
    }
    if (sort=='b')
    {
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
    }
    if (sort=='s')
    {
        for (i=0;i<n-1;i++)
        {
            int min=i;
            for (j=i+1;j<n;j++)
            {
                if (a[j]<a[min])
                {
                    min=j;
                }
            }
            if (min!=i)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
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