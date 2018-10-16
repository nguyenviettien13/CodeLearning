#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	std::vector<string> strings(5);
	strings.push_back("six");
	strings.push_back("seven");
	strings.push_back("eight");
	
	cout << "size: " << strings.size() << std::endl;
	
	for (std::vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
	{
		cout << *it << endl;
	}
	return 1;
}