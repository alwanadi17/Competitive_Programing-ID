uint8_t countBits(unsigned long long n){
  uint8_t binary[64] = {0};
  uint8_t ret = 0, i = 0;
  
  while(n != 0){
    binary[i] = n%2;
    n >>= 1;
    i++;
  }
  
  for(i = 0; i < 64; i++){
    if(binary[i] & 1) ret += 1;
  }
  return ret;
}
