#include<iostream>
#include <vector>
using namespace std;

vector<int> getRow(int k) {
	vector<int> v1;
	for (int i = 0; i < 2; i++)
	{
		v1.push_back(1);
		if (k == i)
		{
			return v1;
		}
	}

	for (int i = 2; i <= k; i++)
	{
		vector<int> v;
		for (int j = 0; j < i - 1; j++)
		{
			int elem = v1[j] + v1[j + 1];
			v.push_back(elem);
		}
		v.insert(v.begin(), 1);
		v.push_back(1);
		v1 = v;
	}
	return v1;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(getRow(n));
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << ' ';
	}
	return 0;
}