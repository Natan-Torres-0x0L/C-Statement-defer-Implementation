#define defer(statement) char jmp = 0; jmp_buf return1, return2; setjmp(return1); if (jmp) { statement longjmp(return2, 0); };
#define return if (!setjmp(return2) && !jmp) { jmp = 1; longjmp(return1, 0); } return

#include <setjmp.h>
