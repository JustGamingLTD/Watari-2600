#pragma once
#include "stdint.h"

class Memory
{
public:
	bool Initialize();

private:
	char* memory[128];
};