#include "coder.h"
#include "command.h"
#include <inttypes.h>
#include <stdio.h>

int encode(uint32_t code_point, CodeUnits *code_units)
{
	printf("%x", code_point % 10);

	return 0;
}

//uint32_t decode(const CodeUnits *code_unit)
//{

//}

//int read_next_code_unit(FILE *in, CodeUnits *code_units)
//{

//}

//int write_code_unit(FILE *out, const CodeUnits *code_unit)
//{

//}
