#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int l = 0;
	int k = 0;
	while (l*l < n)
	{
		l++;
	}

	int s = 0;
	while (l > 0)
	{
		s += l;
		k++;
		while (l > 0 && l*l + k*k > n)
		{
			l--;
		}
	}
	cout << s;
	return 0;
}