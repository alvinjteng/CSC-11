Signed Integers
 - NZCV (Negative Zero Carry Overflow)

ARM Assembly
- Setup your Pi at home for SSH Access. (Secure Shell)
1. Change the default password for your user named pi.\
 A. optionally, create a new user account.
  - command: adduser (must have admin priveledges)
  
g(group)o(other)-(deny)x(execute)r(read)w(write)\
*go-xrw*

g++ source_file.txt -g -o exefile (-g -o optional)\
(source file.ext = internal file in memory called source_file.s (gas/as gas - gnu assembler as - assembler)) (generate source_file.o <- object file)(linker outputs the executable file)\
(g = generate debug info) (-o exefile linker to name the executable file: exe_file)\
.data -holds non-const, uninitialized data.\
.text holds all program code.\
.rodata - all constant variables (read only data)\
.bss - hold non-const, uninitialized data (data is not embedded in the executable)\
.global\
.align - tells the linker how to align data and code on byte bounderies.\
ls - list directory \
-l option - detailed listing\
cd - change directory \
g++/as : c++ ampiler (G++) as (assembler)

gdb - gnu debugger\
tui (text user inferface)\
fs (focus set) (src = source cmd = command window)\
i (info)\
-r (register)\
b (breakpoint)\
r (run)\
n (next inst)\
s (step over)\
nano (text editor)\
vi/vim
gedit (gui based)
emacs

Variables and functions are connected to labels.
your_label:

CPSR - Currect Program Status Register

AAPCS = Arm Architecture Procedure Call Standard\
function parameters 
- registers R0-R3 are used as first four parameters, more than 4 parameters; it gets trickier.
- registers R4-R11 must be saved if function code uses them.
- return values:
  - R0 holds char, short int, integer r.v
  - R1 holds upper 32 bits of a long
  - R2 holds lower 32 bits of a long
  
printf(format_string, [variable # of arguments]);

char *hello_msg = "Hello class!\n";

int main() {
 printf(hello_msg);
 return 0;
}

.data
hello_msg: .asciz (ascii/zero terminated) "Hello class!\n"
 
.text
main: push {lr}
 mov r0, = hello_msg
 bl printf
 
 mov r0, #0
 mov pc,lr
