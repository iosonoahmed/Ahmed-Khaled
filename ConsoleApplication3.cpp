#include <iostream>
using namespace std;
int main()
{
	//C

	int n;
	cout << "Enter the number of books: ";
	cin >> n;

	string titles[1000];
	int total[1000] = {};
	string name;
	int size = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> name;

		bool found = false;

		for (int j = 0; j < size; j++)
		{
			if (titles[j] == name)
			{
				total[j]++;
				cout << name << total[j] << endl;
				found = true;
				break;
			}
		}

		if (!found)
		{
			titles[size] = name;
			total[size] = 0;
			size++;
			cout << "OK" << endl;
		}
	}
}
