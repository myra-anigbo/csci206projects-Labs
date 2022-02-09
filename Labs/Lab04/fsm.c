#include "tokens.h"
const int MAX_LENGTH = 128;
int main(int argc, char *argv[]) {

  if (argc != 2) {
	fprintf(stderr, "Usage: %s string\n", argv[0]);
	exit(1);
  }

  parse_int(argv[1]);

  return 0;
}


