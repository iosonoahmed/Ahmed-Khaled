
#include <iostream>
using namespace std;
int main()
{
	//A
	 
	 long long n, m, a;
	 cin >> n >> m >> a;

	 long long length = ceil((double)n / a);
	 long long width = ceil((double)m / a);
	 long long total = length * width;
	 cout << total;
	 
}
