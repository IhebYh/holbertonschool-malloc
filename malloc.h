#ifndef _MALLOC_H_
#define _MALLOC_H_

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


#define shift_address(addr, size) \
	((void *)((char *)(addr) + (size)))

size_t align(size_t size);
void *naive_malloc(size_t size);

#endif /* _MALLOC_H_ */
