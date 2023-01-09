//Nan Chen
//chen.nan2@northeastern.edu

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* function to encrypt the data*/
void encrypt(char text[], int key)
{
    int i=0;
    while (text[i] != '\0') {
        if (text[i] <= 'Z' && text[i] >= 'A') {
            text[i] = (text[i] - 'A' + key)%26 + 'A';
        }else if (text[i] <= 'z' && text[i] >= 'a'){
            text[i] = (text[i] - 'a' + key)%26 + 'a';
        }
        i++;
    }
}

/*function to decrypt the data*/
void decrypt(char text[],int key)
{
    
    int i=0;
    while (text[i] != '\0') {
        if (text[i] <= 'Z' && text[i] >= 'A') {
            text[i] = (text[i] - 'A' - key + 26)%26 + 'A';
        }else if (text[i] <= 'z' && text[i] >= 'a'){
            text[i] = (text[i] - 'a' - key + 26)%26 + 'a';
        }
        i++;
    }
    
}


/*----------- Main program---------------*/
int main()
{
    char text[20] ;
    int keyvalue=3;
    /*Input string */
    printf("Enter the message:  ");
    scanf("%s",text);
    printf("text input   = %s\n",text);
    
    /*call function to encrypt the data*/
    encrypt(text,keyvalue);
    printf("Encrypted value = %s\n",text);
    
    /*call function to decrypt the data*/
    decrypt(text,keyvalue);
    printf("Decrypted value = %s\n",text);
    
    return 0;
}
