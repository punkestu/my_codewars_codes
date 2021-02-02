#include <iostream>

#include <vector>

std::vector<int> partsSum(const std::vector<int>& ls){
  std::vector<int> ret;
  for(unsigned int i = 0; i < ls.size(); i++){
    ret.push_back(0);
    for(unsigned int j = i; j < ls.size(); j++){
      ret[i]+=ls[j];
    }
  }
  
  return ret;
}

int main(){
	std::vector<int> v = partsSum({0,1,3,6,10});
	for(unsigned int i = 0; i < v.size(); i++){
		std::cout<<v[i]<<std::endl;
	}

	return 0;
}