#include <iostream>
using namespace std;
int main()
{
	//E

	string d;
	cin >> d;
	if (d[0] != '9') {
		if (d[0] > '4') {
			d[0] = '9' - d[0] + '0';
		}
	}
	for (int i = 1; i < d.size(); i++) {
		if (d[i] > '4') {
			d[i] = '9' - d[i] + '0';
		}
	}
	cout << d << endl;

}
