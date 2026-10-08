#include <stdio.h>

void Change(int *ptr)
{
    *ptr = 100;
}

int main()
{

    int number = 50;

    printf("before = %d\n", number);

     Change(&number);

    printf("after = %d\n", number );
    
     
    
    return 0;
}