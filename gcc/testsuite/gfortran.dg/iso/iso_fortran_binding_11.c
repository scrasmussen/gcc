/* From 18.5.5.8 example in the standard for CFI_select_part */
/* Test contributed by Soren Rasmussen <S.Rasmussen@cranfield.ac.uk> */
/* { dg-do compile } */
#include "ISO_Fortran_binding.h"

void
test (CFI_cdesc_t *source)
{
  typedef struct {
    double x; double _Complex y;
  } t;
  CFI_CDESC_T(1) component;
  CFI_cdesc_t *comp_cdesc = (CFI_cdesc_t *)&component;
  CFI_index_t extent[] = { 100 };
  (void)CFI_establish (comp_cdesc, NULL, CFI_attribute_other,
		       CFI_type_double_Complex, sizeof(double _Complex), 1,
		       extent);
  (void)CFI_select_part (comp_cdesc, source, offsetof(t,y), 0);
}
