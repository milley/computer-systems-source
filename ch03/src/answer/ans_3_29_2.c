long sum() {
  long sum = 0;
  long i;
  while (i < 10) {
    if (i & 1)
      goto update;
    sum += i;
  update:
    i++;
  }
}

