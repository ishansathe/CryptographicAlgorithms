#include<stdio.h>
int main()
{
    int arr1[2] = {10, 20};
    int arr2[2];
    int *a1 = arr1;
    int *a2 = arr2;

    printf("%d \n", a1);
    printf("%d \n", a2);
    //Showing the addresses of the 2 arrays

    printf("First array exists:\n");
    for(int i=0; i<2; i++)
    {
        printf("%d", arr1[i]);
    }
    printf("\n");
    printf("Accepting numbers for second array ONLY\n");
    printf("Please don't enter more than 2 numbers\n");
    for(int i=0; i<=2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Now showing both arrays: \n");
    for(int i=0; i<2; i++)
    {
        printf("%d", arr1[i]);
    }
    printf("\t");
    for(int i=0; i<2; i++)
    {
        printf("%d", arr2[i]);
    }
}