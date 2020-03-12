void cond(long a, long *p) {
  if (p) {
    if (a > *p) {
      *p = a;
    } else {
      goto a_le_pvalue;
    }
  }

  a_le_pvalue:
    return;
}
