/*
 * File: sll.h
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 * header
 *
 */

#ifndef __SLL_H__
#define __SLL_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/******************************************************************************/
/*                                  INCLUDES                                  */
/******************************************************************************/

#include <assert.h> //assert
#include <ctype.h>  //size_t
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h> //true, false, bool
#include <stdio.h> //Includes the standard I/O library for functions like `printf`.
#include <stdlib.h> //Includes the standard library for functions like `malloc`, `free`, and `realloc`.
#include <string.h> //Includes the string manipulation library for functions like `memcpy`.
#include <time.h> //time

/******************************************************************************/
/*                      MEMORY DEBUGGING - DO NOT TOUCH                       */
/******************************************************************************/

#define F_MEMORY_DEBUG /* turns on the memory debugging system */
#define F_MEMORY_PRINT /* turns on the memory printing system */
#define F_EXIT_CRASH   /* turns on the crash on exit */
#include "forge/forge.h"

/******************************************************************************/
/*                             SINGLY LINKED LIST                             */
/******************************************************************************/

typedef struct sll sll_t;
extern sll_t *sll_node_create(const int data);
extern void sll_node_destroy(sll_t *head);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __SLL_H__
