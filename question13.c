#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *fp;
    char filename[100],ch;
    int characters=0,words=0,lines=0,inWord=0;
    printf("Enter file name: ");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if (fp==NULL) 
    {
        printf("File not found.\n");
        return 1;
    }
    while ((ch=fgetc(fp))!=EOF) 
    {
        characters++;
        if (ch=='\n')
        {
            lines++;
        }
        if (isspace(ch))
        {
            inWord=0;
        }
        else if (inWord==0) 
        {
            inWord=1;
            words++;
        }
    }
    fclose(fp);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
