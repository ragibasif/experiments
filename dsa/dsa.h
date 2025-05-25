// dsa.h

#ifndef __DSA_H__
#define __DSA_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <assert.h> //assert
#include <ctype.h>  //size_t
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h> //true, false, bool
#include <stdio.h> //Includes the standard I/O library for functions like `printf`.
#include <stdlib.h> //Includes the standard library for functions like `malloc`, `free`, and `realloc`.
#include <string.h> //Includes the string manipulation library for functions like `memcpy`.
#include <time.h> //time

////////////////////////////////////////////////////////////////////////////////
// MEMORY DEBUGGING - DO NOT TOUCH!
////////////////////////////////////////////////////////////////////////////////
#define F_MEMORY_DEBUG /* turns on the memory debugging system */
#define F_MEMORY_PRINT /* turns on the memory printing system */
#define F_EXIT_CRASH   /* turns on the crash on exit */
#include "./forge/forge.h"
////////////////////////////////////////////////////////////////////////////////

// sll
typedef struct sll sll_t;
extern sll_t *sll_node_create(const int data);
extern void sll_node_destroy(sll_t *head);

// dll
typedef struct dll dll_t;
extern dll_t *dll_node_create(const int data);
extern void dll_node_destroy(dll_t *head);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __DSA_H__
