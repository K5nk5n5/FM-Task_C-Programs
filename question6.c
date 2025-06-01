#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int main() 
{
    char a[100];
    int i,vowel=0,consonant=0,length;
    printf("Enter a string: ");
    scanf(" %[^\n]",a);
    for (i=0;a[i]!='\0';i++) 
    {
        char ch=tolower(a[i]); 
        if (isalpha(ch)) 
        {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    printf("Number of vowels: %d\n",vowel);
    printf("Number of consonants: %d\n",consonant);
    srand(time(0));
    length=i;
    for (i=0;i<length-1;i++) 
    {
        int j=rand()%length;
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("Scrambled string: %s\n",a);
    return 0;
}
