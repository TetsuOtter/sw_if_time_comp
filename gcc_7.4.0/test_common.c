#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#include "defs.h"

int main(void)
{
  int vals[LOOP_TIME], i = 0;
  long start_time = 0, fin_time = 0;
  srand(0);                       //rand method init
  for (i = 0; i < LOOP_TIME; i++) //variable init
    vals[i] = rand() % VAL_MAX;
  i = 0;
  start_time = clock();
  for (; i < LOOP_TIME; i++)
    ValCheck(vals[i]);
  fin_time = clock();
  printf("==============================\n");
  printf("result : %lf[s]\n", (double)(fin_time - start_time) / CLOCKS_PER_SEC);
  fprintf(stderr, "result : %lf[s]\n", (double)(fin_time - start_time) / CLOCKS_PER_SEC);
  return EXIT_SUCCESS;
}