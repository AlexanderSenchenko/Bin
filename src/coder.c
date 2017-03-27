#include "coder.h"
#include "command.h"
#include <inttypes.h>
#include <stdio.h>

int encode(uint32_t code_point, CodeUnits *code_units)
{
	uint32_t test = code_point;
	int byte;
	for (byte = 0; test != 0; byte++) {
		test = test >> 6;
	}
		
	printf("%d\n", byte);
	printf("%" PRIx32, test);
	printf("\n");

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
