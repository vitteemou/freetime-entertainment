//Given x, n and d, find(x^n % d)
#include<iostream>
using namespace std;

int power(int x, int n, int d) {
	if (n == 0)
	{
		return 1 % d;
	}

	long long base = x;
	int k = n;
	long long y = 1;
	while (k > 0)
	{
		if (k % 2 == 0)
		{
			k /= 2;
			base = (base*base) % d;
		}
		else
		{
			k--;
			y = (y*base) % d;
		}
	}
	if (y < 0)
	{
		y = (y + d) % d;
	}
	return y;
}

int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	int d;
	cin >> d;

	cout << power(x, n, d);
	return 0;
}