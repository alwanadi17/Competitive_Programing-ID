#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  std::vector<int> ret {0,0};
  int posCount = 0;
  int negSum = 0;
  
  for(int n : input){
    if(n > 0) posCount += 1;
    if(n < 0) negSum += n;
  }
  ret[0] = posCount; ret[1] = negSum;
  
  if(ret[0] == 0 && ret[1] == 0) return input; //if input is empty, return input
  
  return ret;
}
