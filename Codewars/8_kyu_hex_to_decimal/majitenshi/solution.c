// version 1
int hex_to_dec(const char *source) {
  return strtol(source, NULL, 16);
}

// version 2
// int hex_to_dec(const char *source){
//   int cmp = 0;
//   while(*source){
//   char byte = *source++;
//     if (byte >= '0' && byte <= '9') byte = byte - '0';
//     else if(byte >= 'a' && byte <= 'f') byte = byte - 'a' + 10;
//     else if(byte >= 'A' && byte <= 'F') byte = byte - 'A' + 10;
//     cmp = (cmp * 16) | (byte & 0xF);
//   }
//   return cmp;
// };
