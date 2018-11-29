/* From 18.5.5.4 example in the standard */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test (CFI_cdesc_t *dv)
{
  int ind;
  ind = CFI_deallocate (dv);
}
