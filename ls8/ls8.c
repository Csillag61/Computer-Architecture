#include <stdio.h>
#include <string.h>
#include "cpu.h"

/**
 * Main
 */
int main(int argc, char *argv[])
{ 
  if (argc !=2) {
    printf( "usage: ./ls8 filename\n");
    return 1;
  }
  struct cpu cpu;
  
  cpu_init(&cpu);
  cpu_load(&cpu, argv);
  cpu_run(&cpu);

  return 0;
}