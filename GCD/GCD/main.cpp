#include<iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
	if (a == 0 || b == 0)
	{
		return abs(a - b);
	}
	//int g;
	if (b < a)
	{
		a -= b;
		b += a;
		a = b - a;
	}

	while (b%a)
	{
		int g = b - a;
		if (g < a)
		{
			a -= g;
			g += a;
			a = g - a;
		}
		b = g;
	}
	return a;
}
int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;

	cout << gcd(n, m);
	return 0;

}