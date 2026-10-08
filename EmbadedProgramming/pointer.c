#include <stdio.h>
 

int main()
{

     volatile int sensorValue = 25;

     printf("Sensor Value before: %d\n", sensorValue);

     sensorValue = 50;

     printf("Sensor Value after: %d\n", sensorValue);
    
    return 0;
}