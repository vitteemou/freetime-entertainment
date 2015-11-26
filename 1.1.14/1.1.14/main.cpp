#include<iostream>
using namespace std;

int algorithmOfEuclid(int a, int b)
{
	if (a < b)
	{
		swap(a, b);
	}

	if (a%b == 0)
	{
		return b;
	}
	else
	{
		return algorithmOfEuclid(a%b, b);
	}
}
int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;

	int res = algorithmOfEuclid(a, b);
	cout << res;
	return 0;
}