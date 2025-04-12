#include "../include/check_args.h"
#include <stdio.h>

int check_args(int argc) {
  if (argc == 1) {
    printf("pdf [options]\n\n");
    printf("options:\n");
    printf("\t--size <int>\tfile size (MB)\n");
    printf("\t--name  <str>\tfile name\n");
    printf("\t--count <int>\tnumber of file to generate\n\n");

    return 1;
  }

  return 0;
}

