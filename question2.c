#include <stdio.h>
int main ()
{
    double t,sec;
    int hr,min;
    printf ("Enter time in sec:\n");
    scanf ("%lf",&t);
    if (t<0)
    {
        printf ("Invalid input");
        return 0;
    }
    hr=(int)t/3600;
    t=t-(hr*3600);
    min=(int)t/60;
    sec=t-(min*60);
    printf ("Hours: %d\nMinutes: %d\nSeconds: %.2lf",hr,min,sec);
    return 0;
}