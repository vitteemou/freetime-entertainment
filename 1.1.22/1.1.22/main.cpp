#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int k = n;
	while (k > 1)
	{
		int l = 2;
		while (k%l)
		{
			l++;
		}
		cout << l << ' ';
		k /= l;
	}
	return 0;
}