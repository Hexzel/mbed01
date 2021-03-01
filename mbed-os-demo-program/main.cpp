#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led3(LED3);

void Led(DigitalOut &ledpin, int blinkTimes);

int main()
{
	led1 = 1;
	led3 = 1;
	
	while (1) {
		Led(led3, 3);
		Led(led1, 2);
	}
}

void Led(DigitalOut &ledpin, int blinkTimes)
{
	for (blinkTimes = blinkTimes * 2; blinkTimes > 0; blinkTimes--) {
		ledpin = !ledpin;
		ThisThread::sleep_for(500ms);
	}
}

