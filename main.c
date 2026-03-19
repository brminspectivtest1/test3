#include <stdio.h>

int main(int argc, char** argv) {
  fprintf(stdout, "Dummy Application\n");
  for (int i=0; i< argc; ++i) {
    fprintf(stdout, "\tArgument %d: %s\n", i, argv[i]);
  }
  fprintf(stdout, "\n\nHave a nice day!\n");
  return 0;
}
