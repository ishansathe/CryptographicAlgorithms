#include<stdio.h>
int main()
{
    char arr[26], e_arr[26];
    char alphabet;
    int i=0;
    int key,shift;
    for(alphabet = 'a'; alphabet<='z'; alphabet++)
    {
        arr[i] = alphabet;
        i++;
    }


    printf("Kindly enter Key value for the Caesar Cipher \n");
    scanf("%d", &key);

    shift = (26 + key)%26;
    //Shifting the alphabets
    for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        e_arr[shift] = alphabet;
        shift++;
        if(shift>=26) 
        //Fun fact:
        //If condition is set to shift>26 then it leads to a buffer overflow
        //Where the new value is added onto the start of next array, in our case (arr[])
        //This is cause shift becomes 26 (where max index is 25) so it is being shifted to the first array.
        {
            shift = shift%26;
        }
    }

    //printing shifted alphabet
    printf("Now showing the shifted alphabet!\n");
    for(i = 0; i<26; i++)
    {
        printf("%c", e_arr[i]);
    }
}