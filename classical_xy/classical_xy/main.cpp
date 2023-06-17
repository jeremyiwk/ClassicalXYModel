#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>


int main(int argc, char** argv)
{	
	if (argc != 2)
	{
		std::cout << "Program takes 1 argument, " << argc - 1 << " were given." << std::endl; 
		return 1;
	}

	std::string line = argv[1];

	std::cout << "Hello, World!" << " " << line << std::endl;

	std::cout << line.substr(line.length()-3,line.length()-1) << std::endl;

	std::cout << line.length() << std::endl;

	return 0;
}
