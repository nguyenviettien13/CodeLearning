#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> numberset;
	int capacity = numberset.capacity();
	int size = numberset.size();
	for (int i = 0; i < 10000; i++)
	{
		size = numberset.size();
		capacity = numberset.capacity();
		if (size == capacity)
		{
			cout << "size: " << size << "capacity: " << capacity << endl;
		}
		numberset.push_back(i);
	}
	//numberset.clear();
	cout << numberset[1] << endl;
	numberset.reserve(100);

	cout << "capacity: " <<numberset.capacity() << endl;
	cout << "size: " <<numberset.size() << endl;
	return 1;
}