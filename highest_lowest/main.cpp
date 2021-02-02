#include <string>
#include <iostream>

std::string highAndLow(const std::string& numbers){
  int high;
  int low;
  for(unsigned int i = 0; i < numbers.size(); i++){
  	if(numbers[i]!=' '){
		if(numbers[i]!='-'){
	  		if(numbers[i+1]!=' '){
		  		if(i==0){
		  			low = high = numbers[i]-'0';
		  		}else{
		  			if(low>numbers[i]-'0'){
		  				low = numbers[i]-'0';	
		  			}
		  			if(high<numbers[i]-'0'){
		  				high = numbers[i]-'0';	
		  			}
		  		}
		  	}else{
		  		if(i==0){
		  			low = high = std::stoi(numbers.substr(i,1));
		  		}else{
		  			if(low>std::stoi(numbers.substr(i,i+1))){
		  				low = std::stoi(numbers.substr(i,i+1));	
		  			}
		  			if(high<std::stoi(numbers.substr(i,i+1))){
		  				high = std::stoi(numbers.substr(i,i+1));	
		  			}
		  		}
		  	}
		}else{
			if(numbers[i+2]!=' '){
		  		if(i==0){
		  			low = high = -1*(numbers[i+1]-'0');
		  		}else{
		  			if(low>-1*(numbers[i+1]-'0')){
		  				low = -1*(numbers[i+1]-'0');	
		  			}
		  			if(high<-1*(numbers[i+1]-'0')){
		  				high = -1*(numbers[i+1]-'0');	
		  			}
		  		}
		  	}else{
		  		if(i==0){
		  			low = high = std::stoi(numbers.substr(i+1,i+2));
		  		}else{
		  			if(low>std::stoi(numbers.substr(i+1,i+2))){
		  				low = std::stoi(numbers.substr(i+1,i+2));	
		  			}
		  			if(high<std::stoi(numbers.substr(i+1,i+2))){
		  				high = std::stoi(numbers.substr(i+1,i+2));	
		  			}
		  		}
		  	}
		}
	}
  }

  return std::to_string(high)+" "+std::to_string(low);
}

int main(){
	std::cout<<highAndLow("1 9 3 4 -5");
	return 0;
}