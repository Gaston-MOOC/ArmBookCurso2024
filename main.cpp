#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut Led(LED2);

    while (true) {
        Led = ! B1_USER;
    }
}
