unsigned halving_sum(unsigned n) {
  unsigned a = n;
  while(a > 1){
    a = a/2;
    n = n+a;
  }
  return n;
}