#include <vector>
#include <iostream>

int sum_of_minimums(const std::vector<std::vector<int>> &numbers)
{
    int result = 0;
    for(unsigned int i = 0; i < numbers.size(); i++){
      int temp = numbers[i][0];
      for(unsigned int j = 1; j < numbers[i].size(); j++){
        if(temp > numbers[i][j]){
          temp = numbers[i][j];
        }
      }
      result+=temp;
    }
    return result;
}

int main()
{
  std::cout<<sum_of_minimums({{1,2,3,4,5},
                   {5,6,7,8,9},
                   {20,21,34,56,100}});

  return 0;
}