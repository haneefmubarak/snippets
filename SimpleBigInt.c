#include <stdio.h>

#if defined(__amd64__) || defined(__x86_64__)

typedef unsigned long long int BigInt[64];		// BigInts are unsigned ints with a length of 4096 (2^12; 4K) bits
typedef unsigned long long int HugeInt[1024];		// HugeInts are the same with a length of 65536 (2^16; 64K)  bits (much slower)
typedef unsigned long long int MassiveInt[16384];	// MassiveInts are the same with a length of 1048576 (2^20; 1M) bits (really slow)
typedef unsigned long long int InsaneInt[262144];	// What on earth have you been smoking? Length = 16777216 (2^24; 16M) (super slow)

#define SBI_VAR unsigned long long int

#endif

// Whatever the hell you do, DON'T EVER
// try to create one of these statically
// inside a function. Either create it
// globally or use malloc. You WILL
// MURDER the stack, and the last two
// will instantly CAUSE A STACK OVERFLOW.
// You HAVE been warned.

void sbi_assignint(SBI_VAR x[], SBI_VAR y);

void sbi_assign(SBI_VAR x[], SBI_VAR y[]);

void sbi_addint(SBI_VAR x[], SBI_VAR y);

void sbi_add(SBI_VAR x[], SBI_VAR y[]);

void sbi_subint(SBI_VAR x[], SBI_VAR y);

void sbi_sub(SBI_VAR x[], SBI_VAR y[]);

void sbi_multint(SBI_VAR x[], SBI_VAR y);

void sbi_mult(SBI_VAR x[], SBI_VAR y[]);

void sbi_modint(SBI_VAR x[], SBI_VAR y);

void sbi_mod(SBI_VAR x[], SBI_VAR y[]);

void sbi_plusplus(SBI_VAR x[]);

void sbi_minusminus(SBI_VAR x[]);

void sbi_equal(SBI_VAR x[], SBI_VAR y[]);

void sbi_not_equal(SBI_VAR x[], SBI_VAR y[]);

void sbi_more(SBI_VAR x[], SBI_VAR y[]);

void sbi_less(SBI_VAR x[], SBI_VAR y[]);

void sbi_not(SBI_VAR x[]);

void sbi_or(SBI_VAR x[], SBI_VAR y[]);

void sbi_and(SBI_VAR x[], SBI_VAR y[]);

void sbi_nor(SBI_VAR x[], SBI_VAR y[]);

void sbi_nand(SBI_VAR x[], SBI_VAR y[]);

void sbi_xor(SBI_VAR x[], SBI_VAR y[]);

void sbi_xnor(SBI_VAR x[], SBI_VAR y[]);

void sbi_sleft(SBI_VAR x[]);

void sbi_sright(SBI_VAR x[]);

