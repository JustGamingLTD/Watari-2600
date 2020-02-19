#pragma once
#include "Memory.h"
#include "Loader.h"

class Emulator
{
public:
	bool initializeMemory();
private:
	Loader* loader;
	Memory* memory;
};

