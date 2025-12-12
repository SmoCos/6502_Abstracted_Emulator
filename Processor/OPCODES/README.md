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
TRB - 
CLC
INC
A 
TRB
a 
ORA
a,x
ASL
a,x
BBR1
r 
1
2
JSR
a
AND
(zp,x)
BIT
zp
AND
zp
ROL
zp
RMB2
zp 
PLP
s
AND
#
ROL
A
BIT
a
AND
a
ROL
a
BBR2
r 
2
3
BMI
r
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
