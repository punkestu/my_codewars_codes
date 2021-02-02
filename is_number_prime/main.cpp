#include<iostream>
#include<string>

bool isPrime(int num) {
	if(num<=1){
		return false;
	}
	if(num%2 == 0 && num != 2){
		return false;
	}
	if(num%5 == 0 && num != 5){
		return false;
	}
	std::string temp = std::to_string(num);
	int sum = 0;
	for(unsigned int i = 0; i < temp.size(); i++){
		sum+=temp[i]-'0';
	}
	if(sum%3 == 0 && sum !=3){
		return false;
	}

	return true;
}

int main(){
	std::cout<<isPrime(5);
	return 0;
}