#include <stdio.h>


int
main(void) {
#include <defer.h>
  defer({
    puts("Bye bye\r\n");
  });

  puts("Hello, World!");

  return 0;
}
