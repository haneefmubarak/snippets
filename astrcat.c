#include "astrcat.h"

char *__astrcat (const size_t len, const size_t n,
			const size_t *restrict l,
 			const char *restrict *restrict s) {
	char *restrict r = malloc (len + 1);
	if (!r)
		return r;

	size_t off = 0, x;
	for (x = 0; x < n; x++) {
		memcpy (&r[off], s[x], l[x]);
		off += l[x];
	}

	r[len] = 0;
	return r;
}

char *_astrcat (const size_t n, const size_t *restrict l,
			const char *restrict *restrict s) {
	size_t x, len = 0;
	for (x = 0; x < n; x++)
		len += l[x];

	return __astrcat (len, n, l, s);
}

char *aastrcat (const unsigned short n,
			const char *restrict *restrict s) {
	size_t l[n];
	size_t x, len = 0;
	for (x = 0; x < n; x++) {
		l[x] = strlen (s[x]);
		len += l[x];
	}

	return __astrcat (len, n, l, s);
}

char *vastrcat (const unsigned char n, va_list args) {
	size_t l[n];
	const char *restrict s[n];
	size_t x, len = 0;
	for (x = 0; x < n; x++) {
		s[x] = va_arg (args, const char *restrict);
		l[x] = strlen (s[x]);
		len += l[x];
	}

	return __astrcat (len, n, l, s);
}

char *astrcat (const unsigned char n, ...) {
	va_list args;
	va_start (args, n);
	char *r = vastrcat (n, args);
	va_end (args);

	return r;
}
