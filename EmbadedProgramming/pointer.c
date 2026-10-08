#include <stdio.h>

int main()
{
    int number = 50;
    int *ptr = &number;

     printf("before : %d\n", number);

     *ptr = 100;

     printf("after : %d\n", number);


    
    return 0;
}