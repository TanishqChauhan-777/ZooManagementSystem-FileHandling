#include <stdio.h>

int main()
{
    
    int numbers[5] = {10 , 20 , 30 ,40 , 50};

    int *ptr = &numbers[0];

    printf("index 0 - %d\n", *ptr);

    printf("index 1 - %d\n", *(ptr + 1));

    printf("index 2 - %d\n", *(ptr + 2)); 

    printf("index 3 - %d\n", *(ptr + 3));

    printf("index 4 - %d\n", *(ptr + 4));

    
    return 0;
}