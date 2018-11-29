/* From 18.5.5.9 example in the standard for CFI_setpointer */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test (CFI_cdesc_t *ptr)
{
  CFI_index_t lower_bounds[1];
  int ind;
  lower_bounds[0] = 0;
  ind = CFI_setpointer (ptr, ptr, lower_bounds);
}
