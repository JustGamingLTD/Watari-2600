#include "Emulator.h"

bool Emulator::initializeMemory()
{
	bool retVal = false;
	do
	{
		loader = new Loader;
		if (!loader->loadRom("./Roms/dk.a26"))
		{
			break;
		}
		rom = loader->rom;

		memory = new Memory;
		if (!memory->Initialize())
		{
			break;
		}



		retVal = true;
	} while (false);

	return retVal;
}