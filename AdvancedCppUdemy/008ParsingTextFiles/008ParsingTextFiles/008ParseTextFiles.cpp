#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::string inputFileName("Stats.txt");
	std::ifstream inFile;
	inFile.open(inputFileName);

	if (!inFile.is_open())
	{
		std::cout << "Could not open file : " << inputFileName << std::endl;
	}
	else
	{
		while (!inFile.eof())
		{
			std::string line;
			getline(inFile, line, ':');
			int popular;
			inFile >> popular;
			//inFile.get();
			inFile >> std::ws;
			std::cout << "'" << line << "'" << "= " << popular << std::endl;
		}
	}
	return 1;
}