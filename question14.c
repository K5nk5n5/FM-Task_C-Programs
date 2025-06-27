#include <stdio.h>
int Fib(int n) 
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return Fib(n-1)+Fib(n-2);
    }
}
int main() 
{
    int n,fib;
    printf("Enter the required n:\n");
    scanf("%d", &n);
    if (n<0)
    {
        printf ("Invalid input");
        return 0;
    }
    fib=Fib(n);
    printf("The required Fibonacci term: %d",fib);
    return 0;
}