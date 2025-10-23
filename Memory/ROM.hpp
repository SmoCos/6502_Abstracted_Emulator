
#pragma once

#include "AMemory.hpp"


class ROM: public AMemory
{
	public:
		ROM(std::string chipID, int size)
			:AMemory(chipID, size) {}
		~ROM() {}

		void	setData(int index, uint8_t data) override {(void)index, data;}
};