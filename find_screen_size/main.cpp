#include <string>
#include <iostream>

std::string find_screen_height(int width, const std::string &ratio)
{
	int rx = std::stoi(ratio.substr(0,ratio.find(':')));
	int ry = std::stoi(ratio.substr(ratio.find(':')+1,ratio.size()));
	int height = float(width)/float(rx)*float(ry);

    return std::to_string(width)+"X"+std::to_string(height); // Happy coding :)
}

int main(){
	std::cout<<find_screen_height(1024,"4:3");
	return 0;
}