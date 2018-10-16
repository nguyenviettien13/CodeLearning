#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std:: ofstream outFile;
	std::string outputFileName("output.txt");
	outFile.open(outputFileName);
	if (outFile.is_open())
	{
		outFile << "Hello " << std::endl;
		outFile << 123 << std::endl;
		outFile.close();
	}
	else
	{
		std::cout << "Could not open file: " << outputFileName << std::endl;
	}
	std::cout << "xin chao" << std::endl;


	std::fstream outputFile;
	std::string outputFileName1("output1.txt");
	outputFile.open(outputFileName1, std::ios::out);
	if (outputFile.is_open())
	{
		outputFile << "Hello" << std::endl;
		outputFile << 123 << std::endl;
		outputFile.close();
	}
	else
	{
		std::cout << "Could not open file: " << outputFileName1 << std::endl;
	}
	return 1;
}