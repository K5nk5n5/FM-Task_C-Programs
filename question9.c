#include <stdio.h>
int main ()
{
    int a[4][4],i,j,sum=0,dSum=0;
    printf ("Enter the elements of the 4x4 matrix:\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf ("The sum of the elements: %d\n",sum);
    for (i=0;i<4;i++)
    {
        dSum=dSum+a[i][i]+a[i][3-i];
    }
    printf ("The sum of the diagonal elements: %d\n",dSum);
    return 0;
}