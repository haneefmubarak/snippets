#include <stdio.h>
#include <string.h>

typedef struct {
	unsigned int count;
	char **string;
} stringList;

int main (void) {
	stringList blobs;
	blobs.count = 3; // total count -1
	blobs.string = malloc (blobs.count * sizeof (char *));

	(blobs.string)[0] = strdup ("Alice");
	(blobs.string)[1] = strdup ("Bob");
	(blobs.string)[2] = strdup ("Charlie");
	(blobs.string)[3] = strdup ("Dave");

	return 0;
}
