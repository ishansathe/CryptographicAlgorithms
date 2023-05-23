//Code that shifts the entire alphabet to the side (according to the key)
//Not needed for Caesar Cipher for now

#include<stdio.h>
int main()
{
    char arr[26], e_arr[26];
    char alphabet;
    int i=0;
    int key = 3;
    for(alphabet = 'a'; alphabet<='z'; alphabet++)
    {
        arr[i] = alphabet;
        i++;
    }

    //Shifting the alphabets

    int shift = (26 + key)%26;
    printf("%d\n", shift);
    e_arr[shift] = 'a';
    printf("%c \n", e_arr[shift]);

    for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        e_arr[shift] = alphabet;
        shift++;
        if(shift>=26)
        //Fun fact:
        //If condition is set to shift>26 then it leads to a buffer overflow
        //Where the new value is added onto the start of next array, in our case (arr[])
        {
            shift = shift%26;
        }
    }

    //printing shifted alphabet

    for(i = 0; i<26; i++)
    {
        printf("%c", e_arr[i]);
    }
}