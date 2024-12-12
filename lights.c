#include<reg51.h>

// Define port for LEDs
sbit RED_LED = P2^0;
sbit YELLOW_LED = P2^1;
sbit GREEN_LED = P2^2;

void delay(int milliseconds) {
    int i, j;
    for(i = 0; i < milliseconds; i++)
        for(j = 0; j < 100; j++);
}

void main() {
    while(1) {
        // Red light ON (Green and Yellow OFF)
        RED_LED = 1;
        YELLOW_LED = 0;
        GREEN_LED = 0;
        delay(5000); // 5000 milliseconds (5 seconds) delay
        
        // Yellow light ON (Red and Green OFF)
        RED_LED = 0;
        YELLOW_LED = 1;
        GREEN_LED = 0;
        delay(3000); // 3000 milliseconds (3 seconds) delay
        
        // Green light ON (Red and Yellow OFF)
        RED_LED = 0;
        YELLOW_LED = 0;
        GREEN_LED = 1;
        delay(4000); // 4000 milliseconds (4 seconds) delay
			
			// Yellow light ON (Red and Green OFF)
        RED_LED = 0;
        YELLOW_LED = 1;
        GREEN_LED = 0;
        delay(3000); // 3000 milliseconds (3 seconds) delay
    }
}