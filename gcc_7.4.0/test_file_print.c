#include "stdio.h"

#include "defs.h"

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

  //file print to stdout
  printf("#include \"stdio.h\"\n");  //Header include(stdio)
  printf("#include \"defs.h\"\n\n"); //Header include(defs)
  printf("void ValCheck(int val)\n{\n");
  switch (argv[1][0])
  {
  case 'i': //if mode
    printf("\tif (val == 0)\n\t\tprintf(\"0\\n\");\n");
    for (int i = 1; i < VAL_MAX; i++)
      printf("\telse if (val == %d)\n\t\tprintf(\"%d\\n\");\n", i, i);
    break;
  case 's': //sw mode
    printf("\tswitch(val)\n\t{\n");
    for (int i = 0; i < VAL_MAX; i++)
      printf("\tcase %d:\n\t\tprintf(\"%d\\n\");\n\t\tbreak;\n", i, i);
    printf("\t}\n");
    break;
  }
  printf("}\n");

  return 0;
}