/* From 18.5.5.5 example, case(ii) in the standard for CFI_establish */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test ()
{
  typedef struct {double x; double _Complex y;} t;
  t a_c[100];
  CFI_CDESC_T(1) a_fortran;
  int ind;
  CFI_index_t extent[1];

  extent[0] = 100;
  ind = CFI_establish ((CFI_cdesc_t *)&a_fortran, a_c, CFI_attribute_other,
		       CFI_type_struct, sizeof(t), 1, extent);
}
