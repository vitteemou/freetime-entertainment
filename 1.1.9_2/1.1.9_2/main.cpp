#include <iostream>
using namespace std;

int numberOfFibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}

	int a0 = 0;
	int a1 = 1;
	int a;

	while (n > 1)
	{
		a = a0 + a1;
		a0 = a1;
		a1 = a;
		n--;
	}
	return a;
}
int main()
{
	int n;
	cin >> n;
	cout << numberOfFibonacci(n) << endl;
	return 0;
}