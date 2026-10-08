#include <stdio.h>

int main()
{
    int number = 50;
    int *ptr = &number;

    printf("%d\n", number);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    
    return 0;
}