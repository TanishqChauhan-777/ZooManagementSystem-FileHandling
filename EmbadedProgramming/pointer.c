#include <stdio.h>
#include <string.h>

 typedef struct
 {
     int temperature;
     int humidity;
 } SensorData;

int main()
{

     SensorData sensor;

     sensor.temperature = 25;
     sensor.humidity = 60;

     SensorData *ptr = &sensor;

     printf("Temprature: %d\n", ptr->temperature);
     printf("Humidity: %d\n", ptr->humidity);

    
     
    
    return 0;
}