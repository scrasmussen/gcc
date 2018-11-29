/* From 18.5.5.5 example, case(i) in the standard for CFI_establish */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test ()
{
  CFI_rank_t rank;
  CFI_CDESC_T(1) field;
  int ind;
  rank = 1;
  ind = CFI_establish ((CFI_cdesc_t *)&field, NULL, CFI_attribute_allocatable,
		       CFI_type_double, 0, rank, NULL);
}
