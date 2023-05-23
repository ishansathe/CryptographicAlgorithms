#include<stdio.h>

char findAlph(char);

int main()
{
    printf("This program will map the letters in message according to position in alphabet!\n");
    char message[5];
    int pos;
    printf("Enter message of size 5: \n");
    for(int i=0; i<5; i++){
        scanf("%c", &message[i]);
    }
    
    for(int i=0; i<5; i++){
        pos = findAlph(message[i]);
        printf("Letter was found at %d in the English Alphabet\n", pos);
    }
    
    //It's a very interesting interaction, actually
    //The character value is stored as an integer in c
    // So if we were to have a variable of type 'int' and it had a value that is mapped towards a character
    //(Like how it is in this case)
    // THen if we were to display the integer variable as a character then it would display its character value!
    //This is the reason why even though the return value of findAlph function is 'char' it is capable of returning an integer value
    
    //This, however is a recipe for disaster in complex applications.
    // Same interaction occurs vice-versa



    return pos;
    
}

char findAlph(char let)
{
    char alph [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i=0;
    while(i < 26)
    {
        if(let == alph[i])
            return i+1;
        i++;
    }
    printf("Please enter only English Alphabet \n");
}
//When a function fails, it's default return value is 0
//When a variable is not assigned any value, then it's value will be a garbage value (for me it came in 6 digit value)
//That's why 'pos' variable returned a 0
//whereas function findAlph was not working (cuz garbage value of 'i' became too high)