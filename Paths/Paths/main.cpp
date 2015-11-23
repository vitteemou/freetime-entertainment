#include<iostream>
using namespace std;

int uniquePaths(int m, int n) {
	if (m == 1 || n == 1)
	{
		return 1;
	}
	int strLen = m + n - 2;

	long int fact1 = 1;
	long int fact2 = 1;
	for (int i = n; i <= strLen; i++)
	{
		fact1 *= i;
	}
	for (int j = 2; j <= m - 1; j++)
	{
		fact2 *= j;
	}
	return (fact1 / fact2);
}

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;

	cout << uniquePaths(m, n) << endl;
	return 0;
}