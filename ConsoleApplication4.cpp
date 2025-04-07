#include <iostream>
using namespace std;
int main()
{
	//D

	int n, T = 0;
	string degree;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> degree;
		if (degree == "T++" || degree == "++T")
		{
			T++;
		}
		else if (degree == "T--" || degree == "--T")
		{
			T--;
		}
		else
		{
			cout << "error";
		}
	}
	cout << T;


}
