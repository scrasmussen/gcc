/* From 18.5.5.2 example in the standard */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test (CFI_cdesc_t *dv)
{
  CFI_index_t subscripts[2];
  float *address;
  subscripts[0] = 4;
  subscripts[1] = 9;
  address = (float *) CFI_address (dv, subscripts);
}
