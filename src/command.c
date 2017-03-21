#include "command.h"
#include <inttypes>

int encode_file(const char *in_file_name, const char *out_file_name)
{
	FILE *in_file_name, *out_file_name;
	CodeUnit code_unit;
	unit32_t code_point;

	in_file_name = fopen("points.txt", "r");
	out_file_name = fopen("units.bin", "w");

	fscanf(in_file_name, "%d", code_point);

	encode(code_point, code_unit)
}

//int decode_file(const char *in_file_name, const char *out_file_name)
//{
//}
