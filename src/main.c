#include "coder.h"
#include "command.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	encode_file(argv[2], argv[3]);

	return 0;
}
