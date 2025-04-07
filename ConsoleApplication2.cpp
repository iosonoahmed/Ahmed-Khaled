#include <iostream>
using namespace std;
int main() {
    int alice, bob, charlie, n, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> alice >> bob >> charlie;
        if (alice + bob + charlie >= 2)
        {
            total++;
        }
    }
    cout << total << endl;
}
