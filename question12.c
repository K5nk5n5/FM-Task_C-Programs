#include <stdio.h>
int main ()
{
    int n,i,j,k;
    printf ("Enter the number of rows required:\n");
    scanf ("%d",&n);
    if (n<0)
    {
        printf ("Invalid input");
        return 0;
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++) 
        {
            printf(" ");
        }
        for (k=1;k<=i;k++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}