#include <stdio.h>

#if defined(__amd64__) || defined(__x86_64__)

typedef unsigned long long int BigInt[64];		// BigInts are unsigned ints with a length of 4096 (2^12; 4K) bits
typedef unsigned long long int HugeInt[1024];		// HugeInts are the same with a length of 65536 (2^16; 64K)  bits (much slower)
typedef unsigned long long int MassiveInt[16384];	// MassiveInts are the same with a length of 1048576 (2^20; 1M) bits (really slow)
typedef unsigned long long int InsaneInt[262144];	// What on earth have you been smoking? Length = 16777216 (2^24; 16M) (super slow)

#endif

// Whatever the hell you do, dont ever
// try to create one of these statically
// inside a function. Either create it
// globally or use malloc. You will
// MURDER the stack, and the last two
// will instantly cause a stack overflow.


