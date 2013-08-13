// Copyright 2013 Haneef Mubarak
// All Rights Reserved
//
// However, You are permitted to
// and only permitted to view the
// code, compile it, and run it.
//
// You may edit the code provided
// that you send all changes
// back to the repository from
// which you obtained it from.
//
// You may NOT redistribute or
// include the code or any
// resulting binaries and/or
// bytecode or any other 
// representation of this or
// any similar code that serves
// a similar function without
// the express permission of
// Haneef Mubarak.

#include <stdio.h>

//#define LIMIT 42949672946
//#define LIMIT 16777216
#define LIMIT 65536 //Choose another if you'd like

// Preferably use consecutive primes for first three and size for last
#define CONSEC_PRIME_ONE 19 // Largest coprime value; default = 19
#define CONSEC_PRIME_TWO 17 // Second largest coprime value; default = 17
#define CONSEC_PRIME_THR 13 // Second smallest coprime value; default = 13
#define SIZE_COPRIME_FOU 11 // Smallest coprime value; max size (use 2 to the power of bits for true use); default = 11


int main (void) {
	unsigned int x;
	
	for (x = 0; x < LIMIT; x++) {
		printf("%u\n", ((((x + CONSEC_PRIME_ONE) * CONSEC_PRIME_TWO) - CONSEC_PRIME_THR) % SIZE_COPRIME_FOU));
	}

	return 0;
}
