#include <iostream>

#include "emulator.h"

int main()
{
	int retVal = -1;
	do
	{
		Emulator* emulator = new Emulator;
		
		if (!emulator->initializeMemory())
		{
			break;
		}

		retVal = 0;
	} while (false);

	return retVal;
}