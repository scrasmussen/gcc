/* From 18.5.5.7 example, case(ii) in the standard for CFI_section */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test (CFI_cdesc_t *source)
{
  CFI_index_t lower[2], upper[2], strides[1];
  CFI_CDESC_T(1) section;
  int ind;
  lower[0] = source->dim[0].lower_bound;
  upper[0] = source->dim[0].lower_bound + source->dim[0].extent - 1;
  strides[0] = 1;
  lower[1] = upper[1] = source->dim[1].lower_bound + 41;
  strides[1] = 0;
  ind = CFI_establish ((CFI_cdesc_t *)&section, NULL, CFI_attribute_other,
		       CFI_type_float, 0, 1, NULL);
  ind = CFI_section ((CFI_cdesc_t *)&section, source, lower, upper, strides);
}
