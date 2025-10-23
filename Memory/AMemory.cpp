

#include "AMemory.hpp"

AMemory::AMemory(std::string chipID, int size)
	: _chipID(chipID), _size(size), _data(new uint8_t[size]{})
{
}

AMemory::~AMemory()
{
	delete [] _data;
}

uint8_t	AMemory::getData(int index) const
{
	if (index < 0 || index >= _size)
	{
		std::cerr << "Error!\nAccess request to memory is out of bounds!" << std::endl;
	}
	return (this->_data[index]);
}

void	AMemory::setData(int index, uint8_t data)
{
	if (index < 0 || index >= _size)
	{
		std::cerr << "Error!\nAccess request to memory is out of bounds!" << std::endl;
	}
	this->_data[index] = data;
}

void	AMemory::printData() const
{
	std::fstream	dataDump;
	std::string		fileName{this->_chipID};

	fileName.append("_dataDump");

	dataDump.open(fileName);

	dataDump << std::left << std::setw(8) << "Index" << std::setw(8) << "Dec" << std::setw(8) << "Hex" << std::setw(12) << "Binary" << "\n";
	dataDump << std::string(36, '-') << "\n";
	for (int i = 0; i < _size; ++i)
	{
		int val = static_cast<int>(_data[i]);
		dataDump << std::left << std::setw(8) << i << std::right << \
			std::dec << std::setw(8) << val << "  0x" << std::uppercase << \
				std::hex << std::setw(2) << std::setfill('0') << val << std::setfill(' ') << "   " << \
					std::bitset<8>(val) << "\n";
	}
		std::cout << std::dec;
}

