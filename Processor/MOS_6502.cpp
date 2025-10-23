

#include "MOS_6502.hpp"

MOS_6502::MOS_6502()
: _regA{0}, _regX{0}, _regY{0}, _SR{0}, _SP{0}, _cycleCount{0}
{

}

MOS_6502::~MOS_6502()
{

}


/* Entry function to run 6502 */
int		MOS_6502::runBabyRun()
{



	while (1)
	{
		
	}
}