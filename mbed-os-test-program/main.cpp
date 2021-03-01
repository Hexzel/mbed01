#include "mbed.h"

DigitalOut myled(LED2);
DigitalOut myled2(LED1);

int main() {
    while (1) {
        myled = 1;
        myled2 = 0;
        ThisThread::sleep_for(1s);

        myled.write(0);
        myled2.write(1);
        ThisThread::sleep_for(1s);
    }
}
