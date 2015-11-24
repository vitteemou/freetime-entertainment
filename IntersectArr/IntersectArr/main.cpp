//Given 2 sorted arrays, find all the elements which occur in both the arrays.
#include <iostream>
#include <vector>
using namespace std;

vector<int> intersect(vector<int> &A, vector<int> &B) 
{
	vector<int> v;
	if (A.back() < B[0] || B.back() < A[0])
	{
		return v;
	}

	int i = 0;
	int j = 0;
	while (i < A.size() && j < B.size())
	{
		if (A[i] == B[j])
		{
			v.push_back(A[i]);
			i++;
			j++;
		}
		else
		{
			if (A[i] < B[j])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
	}
	return v;
}

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	int term;

	vector<int> A;
	for (int i = 0; i < n; i++)
	{
		cin >> term;
		A.push_back(term);
	}
	vector<int> B;
	for (int i = 0; i < m; i++)
	{
		cin >> term;
		B.push_back(term);
	}

	vector<int> C;
	C = intersect(A, B);
	int k = C.size();
	for (int i = 0; i < k; i++)
	{
		cout << C[i] << ' ';
	}
	return 0;
}