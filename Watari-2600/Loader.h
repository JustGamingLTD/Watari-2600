#pragma once
#include "ROM.h"

class Loader
{
public:
	bool loadRom(const char* romName);
	ROM* rom;
};