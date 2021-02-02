#include <string>
#include <iostream>

std::string duplicate_encoder(const std::string& word){
  std::cout<<word.find(word[2]);
  std::cout<<word.find(word[2],3);

  return "temp";
}

int main()
{
	duplicate_encoder("Helol");
}