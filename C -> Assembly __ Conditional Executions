#include <cstdio>

int main() {
  int x, y;
  printf("Enter two integers: ");
  scanf("%d %d",&x, &y); // unsigned = %u | signed = %d
  
  printf("%d + %d = %d\n", x, y, x+y);
  return 0;
}

/*   
                  Convert to assembly
1. find all string literals, convert them to labels, placed in their respective data section.
2. find all variables, convert them to labels and put the labels in their respective data section.
3. find all functions, convert to labels and store labels in the .text section.

                  To load data from memory to a register:
ldr reg1, = your_data
ldr reg2.[reg1] (dereferences the address in reg.) [___] (must be a register)
*reg1 and reg2 can be the same register (R0-R11) however, this will cause instruction execution delays.

                  C/C++ equivalents 
reg1= &your_data;
reg2= *reg1;

/----------------------------------------------------------------------\
| a = b+c;            | assume r0=a | r1=b | r2=c | r3=x | r4=y | r5=z |
| x = y+z;                                                             |
|----------------------------------------------------------------------|4
| add r0,r1,r2                                                         |
| add r3,r0,r5                                                         |
\----------------------------------------------------------------------/

                    Conditional Execution
CMP reg1,reg2  ----> ALU does behind scenes: reg1-reg2 sets flags in CPSR accordingly
   -or-
CMP reg, #immediate ---> reg - #immediate, sets CPSR flags as accordingly

*/
