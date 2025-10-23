


#pragma once

#include <cstdint>
#include <iostream>

#include "ROM.hpp"
#include "RAM.hpp"

enum e_SRFlags : uint8_t
{
	Negative	= 1 << 7,
	Overflow	= 1 << 6,
	Break		= 1 << 4,
	Decimal		= 1 << 3,
	Interrupt	= 1 << 2,
	Zero		= 1 << 1,
	Carry		= 1 << 0
};


class MOS_6502
{
	public:
		MOS_6502();
		~MOS_6502();

		int		runBabyRun();
		void	printRegister() const;

	private:

		uint8_t			_regA, _regX, _regY; // Register
		uint8_t			_SR; // Status Register
		uint8_t			_SP; // Stack Pointer
		uint16_t		_PC; // Program Counter
		unsigned int	_cycleCount;


		/* Utility Functions for Status Register */
		template<typename... Flags>
		void	setFlags(Flags... flags)
		{
			((_SR |= flags), ...);
		}

		template<typename... Flags>
		void	clearFlags(Flags... flags)
		{
			((status &= ~flags), ...);
		}

		bool	isSet(e_SRFlags flag) const
		{
			return (_SR & flag) != 0;
		}

		void	printStatus() const
		{
			std::cout << "Status: " << +_SR << "\n";
		}





};


/**
 * @brief Instruction list for 6502
 * @cite https://www.masswerk.at/6502/6502_instruction_set.html
 * 
ADC
add with carry
AND
and (with accumulator)
ASL
arithmetic shift left
BCC
branch on carry clear
BCS
branch on carry set
BEQ
branch on equal (zero set)
BIT
bit test
BMI
branch on minus (negative set)
BNE
branch on not equal (zero clear)
BPL
branch on plus (negative clear)
BRK
break / interrupt
BVC
branch on overflow clear
BVS
branch on overflow set
CLC
clear carry
CLD
clear decimal
CLI
clear interrupt disable
CLV
clear overflow
CMP
compare (with accumulator)
CPX
compare with X
CPY
compare with Y
DEC
decrement
DEX
decrement X
DEY
decrement Y
EOR
exclusive or (with accumulator)
INC
increment
INX
increment X
INY
increment Y
JMP
jump
JSR
jump subroutine
LDA
load accumulator
LDX
load X
LDY
load Y
LSR
logical shift right
NOP
no operation
ORA
or with accumulator
PHA
push accumulator
PHP
push processor status (SR)
PLA
pull accumulator
PLP
pull processor status (SR)
ROL
rotate left
ROR
rotate right
RTI
return from interrupt
RTS
return from subroutine
SBC
subtract with carry
SEC
set carry
SED
set decimal
SEI
set interrupt disable
STA
store accumulator
STX
store X
STY
store Y
TAX
transfer accumulator to X
TAY
transfer accumulator to Y
TSX
transfer stack pointer to X
TXA
transfer X to accumulator
TXS
transfer X to stack pointer
TYA
transfer Y to accumulator
 */