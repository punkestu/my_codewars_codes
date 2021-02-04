#include <string>
#include <iostream>


std::string to_camel_case(std::string text) {
  std::string ret;
  if(!text.empty()){
    ret.push_back(text[0]);
    for(unsigned int i = 1; i < text.size(); i++){
      std::cout<<i<<std::endl;
      if(text[i]=='_'||text[i]=='-'){
        i++;
        std::cout<<"change"<<i<<char(text[i]-12)<<std::endl;
        if(text[i]>='a' && text[i]<='z'){
          ret.push_back(char(text[i]-32));
        }else{
          ret.push_back(text[i]);
        }
      }else{
        ret.push_back(text[i]);
      }
    }
  }
  return ret;
}

int main()
{
  std::cout<<to_camel_case("the_stealth_warrior");

  return 0;
}