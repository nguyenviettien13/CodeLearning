#include <iostream>
#include <fstream>
#include <string>
using namespace std;


#pragma pack(push, 1)
struct Person {
	char name[50];
	int age;
	double weight;
};

int main()
{
	Person person = { "Nguyen Viet Tien", 220, 0.4 };
	std::string fileName = "test.bin";


	/******************Write binary file*******************/
	std::ofstream outputFile;
	outputFile.open(fileName, ios::binary);
	if (outputFile.is_open())
	{
		outputFile.write((char*)&person, sizeof(Person));

		outputFile.close();
	}
	else
	{
		cout << "Could not open file: " << fileName << endl;
	}


	/******************Read binary file*******************/
	Person someoneElse = {};
	std::ifstream inFile;
	string inputFileName("test.bin");
	inFile.open(inputFileName, ios::binary);
	if (inFile.is_open())
	{
		inFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));

		outputFile.close();
	}
	else
	{
		cout << "Could not open file: " << fileName << endl;
	}
	cout << "Name: " << someoneElse.name <<", Age: " <<  someoneElse.age <<", weight: " << someoneElse.weight << endl;
	return 1;
}