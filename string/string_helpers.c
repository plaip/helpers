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

int8_t reverse_char(char *str) 
{ 
  uint32_t str_len = strlen(str);
  int8_t   result  = 0;

  if (str == NULL)
  {
    result = -1;
  }
  else
  {
    for (uint32_t idx = 0, last_idx = (str_len - 1); idx < str_len / 2; idx++, last_idx--)
    {
      str[idx]^=str[last_idx]^=str[idx]^=str[last_idx];
    }
  }  
}