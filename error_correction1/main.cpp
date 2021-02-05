#include <string>
#include <iostream>

#include <math.h>

std::string encode(std::string text)
{
	std::string bits = "";
	int a[10], n, i;    
	for(unsigned int j = 0; j < text.size(); j++){
		n=text[j];
		for(i=0; n>0; i++){    
			a[i]=n%2;    
			n= n/2;  
		}  
		for(int k = 8; k >= i; k++){
			for(int k = 0; k < 3; k++){  
				bits+='0';    
			}
		}
		for(i=i-1 ;i>=0 ;i--){  
			for(int k = 0; k < 3; k++){  
				bits+=std::to_string(a[i]);    
			}
		}
	}
    return bits;
}

std::string decode(std::string bits)
{
	std::string text = "";
	int zero = 0;
	for (int i = 0; i < bits.size(); i++)
	{
		if(bits[i]=='0'){
			zero++;
		}
		if(i%3 == 2){
			if(zero>1){
				text+='0';
			}else{
				text+='1';
			}
			zero = 0;
		}
	}
	bits = text;
	text = "";
	int sum = 0; int j = 7;
	for(unsigned int i = 0; i < bits.size(); i++){
		if(bits[i] == '1'){
			sum+=pow(2,j);
		}
		if(j == 0){
			text+=char(sum);
			sum = 0;
			j=7;
		}else{
			j--;
		}
	}

    return text;
}

int main(int argc, char const *argv[])
{
	std::cout<<encode("hey");
	return 0;
}