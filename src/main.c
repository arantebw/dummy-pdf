#include "../include/check_args.h"

int main(int argc, char *argv[]) {
  if (check_args(argc)) {
    return 1;
  }

  return 0;
}
