#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int b;
	cin >> b;

	int b1 = b;
	while (b1 <= a)
	{
		b1 *= 2;
	}

	int q = 0;
	int r = a;
	while (b1 != b)
	{
		b1 /= 2;
		q *= 2;
		while (r >= b1)
		{
			r -= b1;
			q++;
		}
	}
	cout << q << "; " << r << endl;
	return 0;
}