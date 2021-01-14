#include <stdio.h>
#include <string.h>

void encrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] - key;
    }
}

void decrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] + key;
    }
}
int main()
{
    char password[20] ;
    printf("Enter the password: ");
    scanf("%s",password);
    printf("Passwrod     = %s",password);
    encrypt(password,0xFACA);
    printf("Encrypted value = %s",password);
    decrypt(password,0xFACA);
    printf("Decrypted value = %s",password);
    return 0;
}
