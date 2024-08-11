#include "mbed.h"
#include "PinNames.h"

using namespace mbed;

// Initialize some of our GPIOs
DigitalOut LD3(PE_9);
DigitalOut LD4(PE_8);
DigitalOut LD5(PE_10);
DigitalOut LD6(PE_15);
DigitalOut LD7(PE_11);
DigitalOut LD8(PE_14);
DigitalOut LD9(PE_12);
DigitalOut LD10(PE_13);

DigitalOut led_circle[8] = { 
	LD6,
	LD4,
	LD3,
	LD5,
	LD7,
	LD9,
	LD10,
	LD8,
};

int main()
{
	// Prints at 115.2 kbaud
	printf("DISCO time! \n");

	int currentIdx = 0;
	int prevIdx = 7;
	while(true) 
	{
		printf("DANCE! \n");

		// Turn off the previous LED
		led_circle[prevIdx].write(0);
		// Turn on the current LED
		led_circle[currentIdx].write(1);
		HAL_Delay(70);
		
		prevIdx = currentIdx;
		currentIdx++;
		if (currentIdx == 8)
		{
			// Wrap oour circles
			currentIdx = 0;
			prevIdx = 7;
		}

	}

	return 0;
}