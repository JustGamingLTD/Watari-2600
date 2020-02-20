#pragma once
#include "Memory.h"
#include "Loader.h"
#include "ROM.h"

class Emulator
{
public:
	bool initializeMemory();
private:
	Loader* loader;
	ROM* rom;
	Memory* memory;
};

