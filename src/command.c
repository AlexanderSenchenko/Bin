#include "coder.h"
#include "command.h"
#include <inttypes.h>
#include <stdio.h>

int encode_file(const char *in_file_name, const char *out_file_name)
{
	FILE *in_file, *out_file;
	uint32_t code_point;
	CodeUnits *code_units;

	in_file = fopen(in_file_name, "r");
	out_file = fopen(out_file_name, "w");

	fscanf(in_file, "%d", &code_point);

	encode(code_point, code_units);

	fclose(out_file);
	fclose(in_file);

	return 0;
}

//int decode_file(const char *in_file_name, const char *out_file_name)
//{
//}
