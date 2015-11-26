#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int k = 0;
	int solutionAmount = 0;
	while (k*k < n)
	{
		int fixSolutionAmount = 0;
		int l = 0;
		while (k*k + l*l < n)
		{
			l++;
			fixSolutionAmount++;
		}
		k++;
		solutionAmount += fixSolutionAmount;
	}
	cout << solutionAmount;
	return 0;
}