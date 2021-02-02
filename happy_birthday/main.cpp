#include <string>
#include <iostream>

std::string womens_age(unsigned n) {
  return std::to_string(n)+"? That's just 2"+(n%2==0?"0":"1")+", in base "+std::to_string(int(n/2))+"!";
}

int main(){
	std::cout<<womens_age(39);
	return 0;
}