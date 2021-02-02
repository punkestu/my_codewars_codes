#include <iostream>
#include <string>

std::string solution(int number){
	std::string temp = std::to_string(number);
	int digit = temp.size();
	std::string ret;
	for(unsigned int i = 0; i < temp.size(); i++){
		if(temp[i]>'0'){
			if(temp[i]<'4'){
				for(int j = 0; j < temp[i]-'0'; j++){
					if(temp.size()-i == 4){
						ret.push_back('M');
					}
					if(temp.size()-i == 3){
						ret.push_back('C');
					}
					if(temp.size()-i == 2){
						ret.push_back('X');
					}
					if(temp.size()-i == 1){
						ret.push_back('I');
					}
				}
			}
			if(temp[i]=='4'){
				if(temp.size()-i == 3){
					ret+="CD";
				}
				if(temp.size()-i == 2){
					ret+="XL";
				}
				if(temp.size()-i == 1){
					ret+="IV";
				}
			}
			if(temp[i]>'4' && temp[i]<'9'){
				for(int j = 0; j < temp[i]-'4'; j++){
					if(temp.size()-i == 3){
						if(j==0){
							ret+='D';
						}else{
							ret+='C';
						}
					}
					if(temp.size()-i == 2){
						if(j==0){
							ret+='L';
						}else{
							ret+='X';
						}
					}
					if(temp.size()-i == 1){
						if(j==0){
							ret+='V';
						}else{
							ret+='I';
						}
					}
				}
			}
			if(temp[i] == '9'){
				if(temp.size()-i == 3){
					ret+="CM";
				}
				if(temp.size()-i == 2){
					ret+="XC";
				}
				if(temp.size()-i == 1){
					ret+="IX";
				}	
			}
		}
	}

	return ret;
}

int main(){
	std::cout<<solution(1875);
	return 0;
}