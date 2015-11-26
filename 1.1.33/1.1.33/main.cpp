#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a = 1; // a*f(k)
	int b = 0; // b*f(k+1)
	int k = n;
	while (k > 0)
	{
		int l;
		if (k % 2 == 0)
		{
			l = k / 2;
			a = a + b;
			k = l;
		}
		else
		{
			l = k / 2;
			b = a + b;
			k = l;
		}
	}
	cout << b << endl;
	return 0;
}