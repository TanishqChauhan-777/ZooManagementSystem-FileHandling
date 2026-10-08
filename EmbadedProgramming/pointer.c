#include <stdio.h>

int main()
{
    
    int numbers[3] = {10 , 20 , 30};

    int *ptr = &numbers[0];

    printf("index 0 -%d\n", *ptr);

    printf("index 1 -%d\n", *(ptr + 1));

    printf("index 2 -%d\n", *(ptr + 2));

    
    return 0;
}