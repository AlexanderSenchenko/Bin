#include "coder.h"
#include "command.h"
#include <inttypes.h>
#include <stdio.h>

int encode_file(const char *in_file_name, const char *out_file_name)
{
	FILE *in;
	uint32_t code_point;
	CodeUnits *code_units;

	in = fopen(in_file_name, "r");
	fscanf(in, "%" SCNx32, &code_point);
	fclose(in);

	printf("%" PRIx32, code_point);
	printf("\n");

	encode(code_point, code_units);

	return 0;
}

//int decode_file(const char *in_file_name, const char *out_file_name)
//{
//}
