#include <vector>
#include <iostream>

std::vector<int> solve(std::vector<std::string> arr){  
  std::vector<int> result;
  result.resize(arr.size());
  for(unsigned int i = 0; i < arr.size(); i++){
    result[i] = 0;
    for(unsigned int j = 0; j < arr[i].size(); j++){
      if((char)arr[i][j] - 64 == j+1 || (char)arr[i][j] - 96 == j+1){
        result[i]++;
      }
    }
  }
  
  return result;
}

int main()
{
  std::vector<int>res = solve({"abddd","bcdde"});
  std::cout<<res[0];
  return 0;
}