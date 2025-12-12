# List of Instructions Available for 6502 MicroProcessor


| Hex Code | Instruction                      | Assembly Mnemonics | Arguments   | Category |
| -------- | -------------------------------- | ------------------ | ---------   | -------- |
| 00       | Break/Interrupt                  | BRK                | impl        | |
| 01       | Or with Accumulator              | ORA                | X,ind       | |
| 02       |                                  |                    |             |          |
| 03       |                                  |                    |             |          |
| 04       |                                  |                    |             |          |
| 05       | Or with Accumulator              | ORA                | zpg         |          |
| 06       | Arithmetic Shift Left            | ASL                | zpg         |          |
| 07       |                                  |                    |             |          |
| 08       | Pull Processor Status from Stack | PHP                | impl        |          |
| 09       | Or with Accumulator              | ORA                | #           |          |
| 0A       | Arithmetic Shift Left            | ASL                | A           |          |
| 0B       |                                  |                    |             |          |
| 0C       |                                  |                    |             |          |
| 0D       | Or with Accumulator              | ORA                | abs         |          |
| 0E       | Arithmetic Shift Left            | ASL                | abs         |          |
| 0F       |                                  |                    |             |          |
| 10       | Branch on Plus                   | BPL                | rel         |          |
| 11       | Or with Accumulator              | ORA                | ind,Y       |          |
| 12       |                                  |                    |             |          |
| 13       |                                  |                    |             |          |
| 14       |                                  |                    |             |          |
| 15       | Or with Accumulator              | ORA                | zpg,X       |          |
| 16       | Arithmetic Shift Left            | ASL                | zpg,X       |          |
| 17       |                                  |                    |             |          |
| 18       | Clear Carry                      | CLC                | impl        |          |
| 19       | Or with Accumulator              | ORA                | abs,Y       |          |
| 1A       |                                  |                    |             |          |
| 1B       |                                  |                    |             |          |
| 1C       |                                  |                    |             |          |
| 1D       | Or with Accumulator              | ORA                | abs,X       |          |
| 1E       | Arithmetic Shift Left            | ASL                | abs,X       |          |
| 1F       |                                  |                    |             |          |
| 20       | Jump Subroutine                  | JSR                | abs         |          |
| 21       | And                              | AND                | X,ind       |          |
| 22       |                                  |                    |             |          |
| 23       |                                  |                    |             |          |
| 24       | Bit Test                         | BIT                | zpg         |          |
| 25       | And                              | AND                | zpg         |          |
| 26       | Rotate Left                      | ROL                | zpg         |          |
| 27       |                                  |                    |             |          |
| 28       | Pull Processor Status from Stack | PLP                | impl        |          |
| 29       | And                              | AND                | #           |          |
| 2A       | Rotate Left                      | ROL                | A           |          |
| 2B       |                                  |                    |             |          |
| 2C       | Bit Test                         | BIT                | abs         |          |
| 2D       | And                              | AND                | abs         |          |
| 2E       | Rotate Left                      | ROL                | abs         |          |
| 2F       |                                  |                    |             |          |



| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |
| 25       |                     |                    |             |          |


Control
DataProcessing
DataTransfers
InputOutput
TestingBranching

BRK - force interrupt [$00] - Test & Branch
ORA - OR with Accumulator: - Data Processing
  1. [09] (Immediate)
  2. [0D] (Absolute)
  3. [05] (Zero Page)
  4. [11] (Indirect indexed)
TSB - test and set bits [04] tbd
ASL - Arithmetic Shift Left - Data Processing
  1. [0A] (Accumulator)
  2. [06] (Zero Page)
  3. [16] (Zero Page, X)
  4. [0E] (Absolute)
  5. [1E] (Absolute, X)
RMB - Reset Memory Bit(0-7) WDC extension tbd  
PHP - Push Processor Status [08] tbd  
TSB - Test and Set Bits [0C]  WDC extension tbd  
BBR - Branch On Bit Reset [0-7F] WDC extension tbd  
BPL - Branch On Plus [10] tbd  
TRB - Test and Reset Bit [] tbd
CLC - Clear Carry [18]  
INC - Increment[E6 - Zero Page] [EE - Absolute] [FE - Absolute,X (inc location indexed by X)]
TRB
ORA
ASL
BBR1
JSR
AND
BIT
AND
ROL
RMB2
PLP
AND
ROL
BIT
AND
ROL
BBR2
BMI
AND
(zp),y
AND
(zp) 
BIT
zp,x 
AND
zp,x
ROL
zp,x
RMB3
zp 
SEC
I
AND
a,y
DEC
A 
BIT
a,x 
AND
a,x
ROL
a,x
BBR3
r 
3
4
RTI
s
EOR
(zp,x)
EOR
zp
LSR
zp
RMB4
zp 
PHA
s
EOR
#
LSR
A
JMP
a
EOR
a
LSR
a
BBR4
r 
4
5
BVC
r
EOR
(zp),y
EOR
(zp) 
EOR
zp,x
LSR
zp,x
RMB5
zp 
CLI
i
EOR
a,y
PHY
s 
EOR
a,x
LSR
a,x
BBR5
r 
5
6
RTS
s
ADC
(zp,x)
STZ
zp 
ADC
zp
ROR
zp
RMB6
zp 
PLA
s
ADC
#
ROR
A
JMP
(a)
ADC
a
ROR
a
BBR6
r 
6
7
BVS
r
ADC
(zp),y
ADC
(zp) 
STZ
zp,x 
ADC
zp,x
ROR
zp,x
RMB7
zp 
SEI
i
ADC
a,y
PLY
s 
JMP
(a.x) 
ADC
a,x
ROR
a,x
BBR7
r 
7
8
BRA
r 
STA
(zp,x)
STY
zp
STA
zp
STX
zp
SMB0
zp 
DEY
i
BIT
# 
TXA
i
STY
a
STA
a
STX
a
BBS0
r 
8
9
BCC
r
STA
(zp),y
STA
(zp) 
STY
zp,x
STA
zp,x
STX
zp,y
SMB1
zp 
TYA
i
STA
a,y
TXS
i
STZ
a 
STA
a,x
STZ
a,x 
BBS1
r 
9
A
LDY
#
LDA
(zp,x)
LDX
#
LDY
zp
LDA
zp
LDX
zp
SMB2
zp 
TAY
i
LDA
#
TAX
i
LDY
A
LDA
a
LDX
a
BBS2
r 
A
B
BCS
r
LDA
(zp),y
LDA
(zp) 
LDY
zp,x
LDA
zp,x
LDX
zp,y
SMB3
zp 
CLV
i
LDA
A,y
TSX
i
LDY
a,x
LDA
a,x
LDX
a,y
BBS3
r 
B
C
CPY
#
CMP
(zp,x)
CPY
zp
CMP
zp
DEC
zp
SMB4
zp 
INY
i
CMP
#
DEX
i
WAI
I 
CPY
a
CMP
a
DEC
a
BBS4
r 
C
D
BNE
r
CMP
(zp),y
CMP
(zp) 
CMP
zp,x
DEC
zp,x
SMB5
zp 
CLD
i
CMP
a,y
PHX
s 
STP
I 
CMP
a,x
DEC
a,x
BBS5
r 
D
E
CPX
#
SBC
(zp,x)
CPX
zp
SBC
zp
INC
zp
SMB6
zp 
INX
i
SBC
#
NOP
i
CPX
a
SBC
a
INC
a
BBS6
r 
E
F
BEQ
r
SBC
(zp),y
SBC
(zp) 
SBC
zp,x
INC
zp,x
SMB7
zp 
SED
i
SBC
a,y
PLX
s 
SBC
a,x
INC
a,x
BBS7
r 
F
