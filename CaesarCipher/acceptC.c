

//There is something wrong with the way the C programming language is allocating memory at run time
// If we store a value in integer variable first
// and then store a character array
// then the last value of character array is overflowed!

//This problem does not occur when we accept character array first and then the integer variable
// i.e 'Message' first and then 'Key'

//This problem is retained even after defining the integer variable first and the character variable second
//So the order of definition of a variable does not help with this.

#include<stdio.h>
int main()
{
    printf("Accepting characters in char array and displaying:\n");
    int i;
    int key;
    char mess[5];



    printf("Enter 5 char message\n");
    for(i=0; i<5; i++)
    {
        scanf("%c", &mess[i]);
    }
    
    printf("enter key\n");
    scanf("%d", &key);
    
    printf("Now, printing message:\n");
    for(i=0; i<5; i++)
    {
        printf("%c", mess[i]);
    }
    return 0;
}