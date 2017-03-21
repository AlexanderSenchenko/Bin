#include "coder.h"
#include <stdlib.h>
#include "command.h"

int main(int argc, char *argv[])
{
	char in_file_name = atoi(argv[1]);
	char out_file_name = atoi(argv[2]);
	encode_file(&in_file_name, &out_file_name);

	return 0;
}
