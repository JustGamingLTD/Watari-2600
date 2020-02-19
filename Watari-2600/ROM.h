#pragma once
class ROM
{
public:
	bool setBytes(char rom[])
	{
		*bytes = rom;
		return true;
	}
private:
	char* bytes[4096];
};

