/* From 18.5.4 Note 1 in the standard */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

int
main ()
{
  CFI_CDESC_T(5) object;
  int ind;
  ind = CFI_deallocate ((CFI_cdesc_t *)&object);
}
