#include <fstream>

#include "Loader.h"

bool Loader::loadRom(const char* romName)
{
	bool retVal = false;
	do
	{
		rom = new ROM;

		std::fstream romFile;
		romFile.open(romName);
		uint8_t* romBytes[4096];
		if (romFile.is_open())
		{
			while (!romFile.eof())
			{
				romFile.get();
			}
		}
		retVal = true;
		romFile.close();

	} while (false);

	return retVal;
}