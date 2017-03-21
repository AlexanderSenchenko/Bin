#ifndef CODER_H
#define CODER_H
#include <stddef.h>

enum {
	MaxCodeLength = 4;
}

typedef struct{
	unit8_t code[MaxCodeLength];
	size_t legth;
} CodeUnits;

int encode(uint32_t code_point, CodeUnits *code_units);
uint32_t decode(const CodeUnit *code_unit);
int read_next_code_unit(FILE *in, CodeUnits *code_units);
int write_code_unit(FILE *out, const CodeUnit *code_unit);

#endif
