#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int k;
	cin >> k;

	int b = 1;
	int c = a;
	while (k > 0)
	{
		if (k % 2 == 0)
		{
			k /= 2;
			c *= c;
		}
		else
		{
			k--;
			b *= c;
		}
	}

	cout << "a^k: " << b << endl;
	return 0;
}