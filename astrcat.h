#pragma once

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

char *astrcat (unsigned char n, ...);
inline char *astrcat (unsigned char n, ...) {
	va_list args;
	va_start (args, n);
	char *r = vastrcat (n, args);
	va_end (args);

	return r;
}

char *vastrcat	(unsigned char n, va_list args);

char *aastrcat (unsigned short n,
		const char *restrict *restrict s);
inline char *aastrcat (unsigned short n,
			const char *restrict *restrict s) {
	size_t l[n];
	size_t x, len = 0;
	for (x = 0; x < n; x++) {
		l[x] = strlen (s[x]);
		len += l[x];
	}
}
char *_astrcat (const size_t n, const size_t *restrict l,
		const char *restrict *restrict s);
inline char *_astrcat (const size_t n, const size_t *restrict l,
			const char *restrict *restrict s) {
	size_t x, len = 0;
	for (x = 0; x < n; x++)
		len += l[x];

	return __astrcat (len, n, l, s);
}

char *__astrcat	(const size_t len, const size_t n,
			const size_t *restrict l,
			const char *restrict *restrict s);
