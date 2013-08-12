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
//#define LIMIT 65536

int main (void) {
	unsigned int x;
	
	for (x = 0; x < LIMIT; x++) {
		printf("%u\n", ((((x + 19) * 17) - 13) % 11));
	}

	return 0;
}
