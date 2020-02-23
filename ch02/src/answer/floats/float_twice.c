#include <stdio.h>
#include "float_twice.h"

/* Compute 2*f. If f is Nan, then return f. */
float_bits float_twice(float_bits f) {
  unsigned sig = f >> 31;
  unsigned exp = f >> 23 & 0xFF;
  unsigned frac = f & 0x7FFFFF;

  int is_NaN_or_oo = (exp == 0xFF);
  if (is_NaN_or_oo) {
    return f;
  }

  if (exp == 0) {
    /* Denormalized */
    frac <<= 1;
  } else if (exp == 0xFF - 1) {
    /* Twice to oo */
    exp = 0xFF;
    frac = 0;
  } else {
    /* Normalized */
    exp += 1;
  }

  return sig << 31 | exp << 23 | frac;
}
