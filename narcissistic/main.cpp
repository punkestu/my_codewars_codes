#include <vector>
#include <iostream>
#include <math.h>

bool narcissistic( int value ){
  int temp = value;
  std::vector<int> digit;
  while(temp>0){
    digit.push_back((temp-(temp/10)*10));
    temp/=10;
  }
  temp = 0;
  for(unsigned int i = 0; i < digit.size(); i++){
    temp+=pow(digit[i],digit.size());
    std::cout<<digit[i]<<std::endl;
  }
  std::cout<<temp<<std::endl;
  return temp == value ? true : false;
}

int main()
{
  narcissistic(371);
  return 0;
}