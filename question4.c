#include <stdio.h>
#include <string.h>

int main() {
    char Password[20];
    char inputPassword[20];

    printf("Set your password:\n ");
    fgets(Password, sizeof(Password), stdin);
    Password[strcspn(Password, "\n")] = '\0';

    for (int i = 0; i < 3; i++) 
    {
        printf("Enter password: ", i + 1);
        fgets(inputPassword, sizeof(inputPassword), stdin);
        inputPassword[strcspn(inputPassword, "\n")] = '\0';

        if (strcmp(inputPassword,Password) == 0) 
        {
            printf("Login successful!\n");
            return 0;
        } 
        else 
        {
            printf("Incorrect password.\n");
        }
    }
    printf ("Too many failed attempts. Access denied.\n");

    return 0;
}