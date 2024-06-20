#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut Led(LED2);
    DigitalOut LedRed(LED3);

    while (true) {
        Led = ! B1_USER;
        LedRed = ! B1_USER;
    }
}
