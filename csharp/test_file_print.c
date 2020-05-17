#include "stdio.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    fprintf(stderr, "Arg not found\n");
    return 1;
  }

  switch (argv[1][0])
  {
  case 'i': //if mode
  case 's': //sw mode
    break;
  default:
    fprintf(stderr, "Unuseable Char\n");
    return 1;
  }

  int VAL_MAX = atoi(argv[2]);

  //file print to stdout
  printf("namespace sw_if_time_comp\n");
  printf("{\n");
  switch (argv[1][0])
  {
  case 'i': //if mode
    printf("\tstatic public class ValCheck_IF\n");
    printf("\t{\n");
    printf("\t\tstatic public void ValCheck(in int val)\n");
    printf("\t\t{\n");
    printf("\t\t\tif (val == 0)\n");
    printf("\t\t\t\tProgram.WhenMatched(%d);\n", 0);
    for (int i = 1; i < VAL_MAX; i++)
    {
      printf("\t\t\telse if (val == %d)\n", i);
      printf("\t\t\t\tProgram.WhenMatched(%d);\n", i);
    }
    break;
  case 's': //sw mode
    printf("\tstatic public class ValCheck_SW\n");
    printf("\t{\n");
    printf("\t\tstatic public void ValCheck(in int val)\n");
    printf("\t\t{\n");
    printf("\t\t\tswitch(val)\n");
    printf("\t\t\t{\n");
    for (int i = 0; i < VAL_MAX; i++)
    {
      printf("\t\t\t\tcase %d:\n", i);
      printf("\t\t\t\t\tProgram.WhenMatched(%d);\n", i);
      printf("\t\t\t\t\tbreak;\n");
    }
    printf("\t\t\t}\n");
    break;
  }
  printf("\t\t}\n\t}\n}");
  return 0;
}