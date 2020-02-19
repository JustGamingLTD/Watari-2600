#pragma once
#include "ROM.h"

class Loader
{
public:
	bool loadRom(const char* romName);
	ROM* rom;
private:
	bool loadFile(const char* fileName);
	bool createRom();
	char* romBytes[4096];
};