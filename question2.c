#include <stdio.h>
int main ()
{
    int t,sec,hr,min;
    printf ("Enter time in sec:\n");
    scanf ("%d",&t);
    hr=t/3600;
    t=t%3600;
    min=t/60;
    sec=t%60;
    printf ("Hours: %d\nMinutes: %d\nSeconds: %d",hr,min,sec);
    return 0;
}