#include <stdio.h>
int main() 
{
    char a[100];
    int i=0;
    printf("Enter the string:\n");
    scanf("%s",a);
    while (a[i]!='\0') 
    {
        char current=a[i];
        int count=1;
        while (a[i+count]==current) 
        {
            count++;
        }
        printf("%c%d",current,count);
        i=i+count;
    }
    return 0;
}
