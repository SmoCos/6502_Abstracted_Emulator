
#pragma once

#include "AMemory.hpp"


class RAM: public AMemory
{
	public:
		RAM(std::string chipID, int size)
			:AMemory(chipID, size) {}
		~RAM() {}
};