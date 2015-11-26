#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	double sum = 1;
	double numb = 1;
	for (int i = 1; i < n; i++)
	{
		numb = 1 / i;
		sum += numb;
	}
	return 0;
}