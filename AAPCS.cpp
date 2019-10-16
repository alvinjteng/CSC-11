const char* fmt = "%d\n";
void fun(int x) (x = r0)
{
  x=x+1;
  printf(fmt, x);
}

main () {
  int a = 5;
  fun(a);
  printf(fmt, a);
}

-----------------------ASSEMBLY-----------------------
.rodata
  format_str: .asciz "%d\n"

fun:
  push{lr}
  add r0,r0, #1
  mov r1,r0
  ldr r0, =format_str
  bl printf
  pop{pc}
  
main:
  push{lr}
  mov r4,#5
  mov r0,r4
  bl fun
  ldr r0, =format_str
  mov r1, r4
  bl printf
  pop{pc}
