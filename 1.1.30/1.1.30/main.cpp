#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int k;
	cin >> k;

	int dozens = 0;
	int mod = 1;
	while (dozens < k)
	{
		cout << ((10 * mod) / n )<< ' ';
		mod = (10 * mod) % n;
		dozens++;
	}
	return 0;
}