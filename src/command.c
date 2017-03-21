#include "coder.h"
#include <inttypes.h>
#include <stdio.h>
#include "command.h"

int encode_file(const char *in_file_name, const char *out_file_name)
{
	FILE *in_file, *out_file;
	//CodeUnits code_units;
	uint32_t code_point;

	in_file = fopen(in_file_name, "r");
	out_file = fopen(out_file_name, "w");

	fscanf(in_file, "%d", &code_point);
	fprintf(out_file, "%d", code_point);

	//encode(code_point, code_units);

	return 0;
}

//int decode_file(const char *in_file_name, const char *out_file_name)
//{
//}
