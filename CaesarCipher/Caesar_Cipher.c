#include<stdio.h>

char encryptAlph(char, int);
//Declaring the function which would have the original set of alphabet
//From which we will look for the alphabet we have in our 'message' character array.

int main()
{
    printf("This program will be showing you the output of Caesar Cipher\n");
    printf("By default, the size of message accepted will be 5. \n");
    printf("Key has to be provided by you.\n");

    char message[5];
    //A character array that will store the message.

    int key;
    //An integer variable that will store the key.

    char e;
    //Used to display the encrypted character;


    printf("First enter your message. Remember, it must be of size 5 only\n");
    for(int i=0; i<5; i++)
    {
        scanf("%c", &message[i]);
    }

    printf("Now, enter the key:\n");
    scanf("%d", &key);

    printf("Printing your message:\n");
    for(int i=0; i<5; i++)
    {
        printf("%c", message[i]);
    }
    printf("Now showing the encrypted message\n");
    for(int i = 0; i<5; i++)
    {
        printf("%c", encryptAlph(message[i], key));
        //Since it is the simple Ceaser Cipher, we just have to add or remove key value in order to get the correct key.
    }

}

char encryptAlph(char let, int _key)
{
    char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i =0;
    int modKey;
    //In case the value of alphabet goes higher than 'z'

    while(let!= alph[i])
    {
        i++;
    }
    
    modKey = (i + _key)%26;
    if(modKey < 0)
    {
        modKey = modKey * -1;
        //If modKey turns out to be negative cuz of _key being negative
    }
    //Keeping the alphabet value between 0 and 26

    return alph[modKey];


}