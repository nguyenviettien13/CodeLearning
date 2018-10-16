#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector< vector<int> > grid(3, vector<int>(4, 7));
	for (int row = 0; row < grid.size(); row++)
	{
		for (int col = 0; col < grid[row].size(); col++)
		{
			cout << grid[row][col];
		}
		cout << endl;
	}
	grid[0].push_back(1);
	for (int row = 0; row < grid.size(); row++)
	{
		for (int col = 0; col < grid[row].size(); col++)
		{
			cout << grid[row][col];
		}
		cout << endl;
	}
	cout << &grid[0][4] << endl;
	cout << &grid[1][0] << endl;
	return 1;
}