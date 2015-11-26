//print squares
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int k = 0;
	int kSquare = 0;
	while (k < n)
	{
		k++;
		kSquare = kSquare + k + k - 1;
		cout << kSquare << ' ';
	}
	return 0;
}