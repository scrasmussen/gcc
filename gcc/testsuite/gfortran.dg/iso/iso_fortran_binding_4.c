/* From 18.5.5.3 example in the standard */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test (CFI_cdesc_t *dv)
{
  CFI_index_t lower[2], upper[2];
  int ind;
  lower[0] = 1; lower[1] = 1;
  upper[0] = 100; upper[1] = 500;
  ind = CFI_allocate(dv, lower, upper, 0);
}
