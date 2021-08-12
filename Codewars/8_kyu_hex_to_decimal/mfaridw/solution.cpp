#include <string>

int hexToDec(std::string hexString)
{
  int sum = 0;
  for(int i = 0; hexString[i] != '\0'; i++)
  {
    int decimal = 0;
    //change ascii value
    if (hexString[i] >= 'a')
      decimal = (hexString[i] % 'a') + 10;
    else if (hexString[i] >= 'A')
      decimal = (hexString[i] % 'A') + 10;
    else if (hexString[i] >= '0')
      decimal = hexString[i] % '0';
    
    //convert to decimal
    if (hexString[i+1] != '\0')
      sum = (sum +decimal) * 16;
    else
      sum += decimal;
  }
  if (hexString[0] == '-')
    sum *= -1;
  
  return sum;
}