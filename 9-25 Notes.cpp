#include <cstdio>

int main() {
  int x, y;
  printf("Enter two integers: ");
  scanf("%d %d",&x, &y); // unsigned = %u
  
  printf("%d + %d = %d\n", x, y, x+y);
  return 0;
}

/*   convert to assembly
1. find all string literals, convert them to labels, placed in their respective data section.
2. find all variables, convert them to labels and put the labels in their respective data section.
3. find all functions, convert to labels and store labels in the .text section.

To load data from memory to a register:
LDR reg1, = your_data
LDR reg2.[reg1] (dereferences the address in reg.)
*reg1 and reg2 can be the same register (R0-R11) however, this will cause instruction execution delays.

C/C++ equivalents 
reg1= &your_data;
reg2= *reg1;
*/

