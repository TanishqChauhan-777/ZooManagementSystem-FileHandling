#include <stdio.h>

void Counter()
{
    static int count = 0;
    count++;

    printf("%d\n", count);
}
 

int main()
{

    Counter();
    Counter();
    Counter();
    Counter();
    Counter();
     
    return 0;
}