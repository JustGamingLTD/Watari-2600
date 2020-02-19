#include <fstream>

#include "Loader.h"

bool Loader::loadRom(const char* romName)
{
	bool retVal = false;
	do
	{
		rom = new ROM;

		if (!loadFile(romName))
		{
			break;
		}

		if (!createRom())
		{
			break;
		}

		retVal = true;

	} while (false);

	return retVal;
}

bool Loader::loadFile(const char* romName)
{
	bool retVal = false;

	do
	{
		std::fstream romFile(romName);
		if (!romFile.good())
		{
			break;
		}

		romFile.read(*romBytes, 4096);
		romFile.close();

		retVal = true;
	} while (false);

	return retVal;
}

bool Loader::createRom()
{
	return rom->setBytes(*romBytes);
}