/* From 18.5.5.6 example in the standard for CFI_is_contiguous */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test (CFI_cdesc_t *dv)
{
  int contig;
  contig = CFI_is_contiguous (dv);
}
