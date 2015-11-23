//You are given a sequence of points and the order in which you need to cover the points.
//Give the minimum number of steps in which you can achieve it.You start from the first point.

#include<iostream>
#include <vector>
using namespace std;

int coverPoints(vector<int> &X, vector<int> &Y) {
	int count = 0;
	int l = 0;
	for (int i = 0; i < X.size() - 1; i++)
	{
		if ((X[i] != X[i + 1]) || (Y[i] != Y[i + 1]))

		{
			int diff_x = abs(X[i] - X[i + 1]);
			int diff_y = abs(Y[i] - Y[i + 1]);

			if (diff_x > diff_y)
			{
				count += diff_x;
			}
			else
			{
				count += diff_y;
			}
		}
	}

	return count;
}

int main()
{
	int n;
	cin >> n;

	int term;
	vector<int> X(n);
	for (int i = 0; i < n; i++)
	{
		cin >> term;
		X.push_back(term);
	}
	vector<int> Y(n);
	for (int i = 0; i < n; i++)
	{
		cin >> term;
		Y.push_back(term);
	}
	
	cout << coverPoints(X, Y) << endl;
	return 0;
}