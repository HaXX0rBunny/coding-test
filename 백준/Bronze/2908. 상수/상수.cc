#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string str1;
	std::string str2;
	std::cin >> str1 >> str2;
	
	std::reverse(str1.begin(), str1.end());

	std::reverse(str2.begin(), str2.end());
	
	if (str1 >= str2)
		std::cout << str1;
	else
		std::cout << str2;
	return 0;

	
}