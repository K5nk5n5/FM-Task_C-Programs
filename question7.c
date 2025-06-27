#include <stdio.h>
int main() 
{
    int a[50],n,*p;
    int i,Max,sMax;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    if (n<=1)
    {
        printf ("Invalid input. Number of elements must atleast be 2.");
        return 0;
    }
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p = a;
    if(p[0]>p[1]) 
    {
        Max=p[0];
        sMax=p[1];
    }
    else 
    {
        Max=p[1];
        sMax=p[0];
    }
    for(i=2;i<n;i++) 
    {
        if(p[i]>Max) 
        {
            sMax=Max;
            Max=p[i];
        } 
        else if(p[i]>sMax&&p[i]!=Max) 
        {
            sMax=p[i];
        }
    }
    printf("Second largest element is: %d",sMax);
    return 0;
}
