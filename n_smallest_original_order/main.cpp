#include <vector>
#include <iostream>

std::vector<int> firstNSmallest(const std::vector<int> arr, int n){
  std::vector<int> tempArr = arr;
  std::vector<int> order;
  for(unsigned int i = 0; i < arr.size(); i++){
    order.push_back(i);
  }
  for(unsigned int i = 1; i < arr.size(); i++){
    for(unsigned int j = 0; j < i; j++){
      if(tempArr[j]>tempArr[i]){
        int temp = tempArr[j];
        tempArr[j] = tempArr[i];
        tempArr[i] = temp;
        temp = order[j];
        order[j] = order[i];
        order[i] = temp;
      }
    }
  }
  for(unsigned int i = 1; i < n; i++){
    for(unsigned int j = 0; j < i; j++){
      if(order[j]>order[i]){
        int temp = order[j];
        order[j] = order[i];
        order[i] = temp;
      }
    }
  }
  std::vector<int> ret;
  for(int i = 0; i < n; i++){
    std::cout<<order[i]<<" "<<arr[order[i]]<<std::endl;
    ret.push_back(arr[order[i]]);
  }
  
  return ret;
}

int main(){
  firstNSmallest({5,4,3,2,1},3);
  return 0;
}