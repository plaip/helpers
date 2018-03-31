/*
 * Copyright (c) 2018 Vincent Willy
 *
 * BSD 3-Clause License
 * All rights reserved.
 *
 * Helpers to manipulate strings
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/*
 * Reverse string buffer.
 *
 * Return error code:
 *  0: String correctly reversed.
 * -1: `str` pointer is NULL.
 */
int8_t reverse_char(char *str);