#include <stdio.h>
#include <string.h>
int main() 
{
    char a[100];
    int i=0;
    printf("Enter the string:\n");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    if (a[0]=='\0')
    {
        printf ("No input entered");
        return 0;
    }
    while (a[i]!='\0') 
    {
        char current=a[i];
        int count=1;
        while (a[i+count]==current) 
        {
            count++;
        }
        printf("%c(%d)",current,count);
        i=i+count;
    }
    return 0;
}
