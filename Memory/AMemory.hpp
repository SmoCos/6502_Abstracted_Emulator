

#pragma once

#include <cstdint>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <bitset>

class AMemory
{
	public:
		AMemory(std::string chipID, int size);
		virtual ~AMemory();

		virtual uint8_t	getData(int index) const;
		virtual void	setData(int index, uint8_t data);

		void	printData() const;


	private:
		std::string	_chipID;
		int			_size;
		uint8_t		*_data;
};