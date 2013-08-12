// CycleSpend
// Copyright 2013 Haneef Mubarak
//
// This program simply circumvents compilers that optimize away
// "useless" computations. The purpose of this program is to 
// spend all available cycles and push whatever is executing
// the process to its maximum capacity in order to slow down
// a system, generate heat in case of dire situations, waste
// the battery power | increase your electric bill, &| anything
// else you might want out of it.
//
// Usage: compile, then `./cyclespend > /dev/null`
//
// Licensed under the Modified WTFPL (MWTFPL)
// License is included at the end of the document

#include <stdio.h>

void swap(long long *x, long long *y, long long *z) { 
	// Wasting cpu, not RAM
	// Threeway XORswap w/ help from Vornicus
	// on freenode: ABC > CAB = 1,2; 1,3
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;

	*x ^= *z;
	*z ^= *x;
	*x ^= *z;
}

union raw {
	double f;
	long long l;
};

int main() {
	
	unsigned long long int rounds = 18446744073709551615; 	// The number of times you want to run this; 
								// default number is ((2^64)-1) - assuming 1 
								// trillion rounds / second: 2/3 earth year,
								// assuming 1 billion rounds / second: over 
								// half a millenium. Full repeat every 3 rounds.

	unsigned long long int count = 0;

	union raw x;
	union raw y;
	union raw z;

	x.f = 9876; // Big prandom numbers
	y.f = 5432; // will use more hw
	z.f = 1098; // to compute

	for (count = 0; count < rounds; count++) {
		printf("Round %llu.\n", count); // For the heck of it
		x.f = x.f * y.f; // Multiplication uses big hw resources
		printf("x = %f, y = %f; z = %f\n", x.f, y.f, z.f); // Make it more interesting
		x.f = x.f * z.f; // Wait for it...
		printf("x = %f, y = %f; z = %f\n", x.f, y.f, z.f); // Almost there		
		x.f = x.f / ( y.f * z.f ); // DIVISION uses MASSIVE resources...
		printf("x = %f, y = %f; z = %f\n", x.f, y.f, z.f); // What do you know, back to the beginning

		swap(&x.l, &y.l, &z.l); // Make DBGing &| REing more fun...
	}

	return 0; // In case it ever finishes
}
