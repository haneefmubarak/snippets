#ifndef UNIVERSALVAR
#define UNIVERSALVAR

#if defined(__amd64__) || defined(__x86_64__)

union universalvar8 {
	unsigned char u;
	char c;
};

union universalvar16 {
	unsigned short int u;
	short int i;
};

union universalvar32 {
	unsigned int u;
	int i;
	float f;
};

union universalvar64 {
	unsigned long int u;
	long int i;
	double f;
};

union universalvar {
	char c[16];
	unsigned char uc[16];
	short int s[8];
	unsigned short int us[8];
	int i[4];
	unsigned int u[4];
	float f[4];
	long int l[2];
	unsigned long int ul[2];
	double d[2];
	long double n;
};

typedef union universalvar8	universal8;
typedef union universalvar16	universal16;
typedef union universalvar32	universal32;
typedef union universalvar64	universal64;
typedef union universalvar	universal;

#endif

#endif
 
