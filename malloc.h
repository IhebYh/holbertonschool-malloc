#ifndef _MALLOC_H_
#define _MALLOC_H_

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define shift_address(addr, size) \
	((void *)((char *)(addr) + (size)))
#define is_allocated(x) ((x) & 1)
#define sizeof_chunk(x) ((x) ^ 1)
#define allocate(x) (*((char *)(x)) += 1)
#define unallocate(x) (*((char *)(x)) -= 1)

size_t largest;

size_t align(size_t size);
void *naive_malloc(size_t size);
void *_malloc(size_t size);
void _free(void *ptr);

#endif /* _MALLOC_H_ */
