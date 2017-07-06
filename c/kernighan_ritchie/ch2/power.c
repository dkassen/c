int power(int base, int exp) {
  switch (exp) {
    case 0:
      return 1;
    case 1:
      return base;
    default:
      return base * power(base, exp-1);
  }
}
