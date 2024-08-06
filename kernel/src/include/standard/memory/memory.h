#ifndef _MEMORY_H
#define _MEMORY_H 1

#include <stddef.h>

void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *src1, const void *src2, size_t n);

#endif