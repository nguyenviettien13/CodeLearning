#include <iostream>
#include <fstream>
#include <string>



int main()
{
	std::string inFileName("input.txt");
	std::ifstream inFile;
	inFile.open(inFileName);
	if (inFile.is_open())
	{
		std::string line;
		while (!inFile.eof())
		{
			getline(inFile, line);
			std::cout << line<< std::endl;
		}
		inFile.close();
	}
	else
	{
		std::cout << "Could not open File" << std::endl;
	}


	std::string inFileName1("input.txt");
	std::ifstream inFile1;
	inFile1.open(inFileName1);
	if (inFile1.is_open())
	{
		std::string line;
		while (!inFile1.eof())
		{
			inFile1 >> line;
			std::cout << line << std::endl;
		}
	}
	else
	{
		std::cout << "Could not open File" << std::endl;
	}
	return 1;
}