#include <stdio.h>
#include <time.h>




 int main() {
    time_t raw_time;
    struct tm *current_time;
    char buffer[50]; 

    time(&raw_time);  
    current_time = localtime(&raw_time);  

   
    strftime(buffer, 50, "%I:%M:%S %p", current_time);

    
    printf("current time: %s\n", buffer);

    return 0;
}