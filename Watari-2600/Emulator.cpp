#include "Emulator.h"

bool Emulator::initializeMemory()
{
	bool retVal = false;
	do
	{
		loader = new Loader;
		if (!loader->loadRom())
		{
			break;
		}

		memory = new Memory;
		if (!memory->Initialize())
		{
			break;
		}

		retVal = true;
	} while (false);

	return retVal;
}