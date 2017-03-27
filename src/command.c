#include "coder.h"
#include "command.h"
#include <inttypes.h>
#include <stdio.h>

int encode_file(const char *in_file_name, const char *out_file_name)
{
	FILE *in, *out;
	uint32_t code_point;
	CodeUnits code_units;

	in = fopen(in_file_name, "r");
	fscanf(in, "%" SCNx32, &code_point);
	fclose(in);

	encode(code_point, &code_units);

	out = fopen(out_file_name, "wb");

	fwrite(code_units.code, code_units.legth, sizeof(code_units.code), out);

	fclose(out);

	return 0;
}

//int decode_file(const char *in_file_name, const char *out_file_name)
//{
//}
